FILE_VIMRC=${HOME}/.vimrc
DIR_VIM=${HOME}/.vim
DIR_COLORS=colors
DIR_CTAGS=ctags
DIR_MANUAL=/usr/share/man/man3/

install:clang
	cat vimrc > ${FILE_VIMRC}
	mkdir ${DIR_VIM}
	cp -r ${DIR_COLORS} ${DIR_VIM}
	cp -r ${DIR_CTAGS} ${DIR_VIM}
	sudo cp manC++/* ${DIR_MANUAL}
	cp plugins.vim ${DIR_VIM} 
	sudo apt-get install curl
	sudo apt-get install astyle
	curl -fLo ~/.vim/autoload/plug.vim --create-dirs \
	https://raw.githubusercontent.com/junegunn/vim-plug/master/plug.vim
	vim -c "PlugInstall"

update:
	cat vimrc > ${FILE_VIMRC}
	cp plugins.vim ${DIR_VIM}
	cp -r ${DIR_COLORS} ${DIR_VIM}
	cp -r ${DIR_CTAGS} ${DIR_VIM}

set_default:
	rm -rf ~/.vim ~/.vimrc ~/.viminfo

help:
	@echo "install update set_default"

clang:
	sudo apt-get -y install clang libclang-dev
