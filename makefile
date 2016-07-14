# =============================================================================
# Author:         scps950707
# Email:          scps950707@gmail.com
# Created:        2015-04-18 01:55
# Last Modified:  2016-07-14 19:56
# Filename:       makefile
# =============================================================================

FILE_VIMRC=${HOME}/.vimrc
DIR_VIM=${HOME}/.vim
DIR_COLORS=colors

install:
	cat vimrc > ${FILE_VIMRC}
	mkdir ${DIR_VIM}
	cp -r ${DIR_COLORS} ${DIR_VIM}
	cp *.vim ${DIR_VIM}
	sudo apt-get -y install curl astyle exuberant-ctags
	curl -fLo ~/.vim/autoload/plug.vim --create-dirs \
	https://raw.githubusercontent.com/junegunn/vim-plug/master/plug.vim
	vim -c "PlugInstall"

update:
	cat vimrc > ${FILE_VIMRC}
	cp *.vim ${DIR_VIM}
	cp -r ${DIR_COLORS} ${DIR_VIM}

uninstall:
	rm -rf ~/.vim ~/.vimrc ~/.viminfo
