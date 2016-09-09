# =============================================================================
# Author:         scps950707
# Email:          scps950707@gmail.com
# Created:        2015-04-18 01:55
# Last Modified:  2016-09-09 20:41
# Filename:       makefile
# =============================================================================

FILE_VIMRC=${HOME}/.vimrc
DIR_VIM=${HOME}/.vim

install:
	mkdir -p ${DIR_VIM}
	cp vimrc ${FILE_VIMRC}
	cp *.vim ${DIR_VIM}
	sudo apt-get -y install curl astyle exuberant-ctags
	curl -fLo ~/.vim/autoload/plug.vim --create-dirs \
	https://raw.githubusercontent.com/junegunn/vim-plug/master/plug.vim
	vim -c "PlugInstall"

update:
	cp vimrc ${FILE_VIMRC}
	cp *.vim ${DIR_VIM}

uninstall:
	rm -rf ~/.vim ~/.vimrc ~/.viminfo
