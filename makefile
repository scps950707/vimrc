FILE_VIMRC=${HOME}/.vimrc
DIR_VIM=${HOME}/.vim
DIR_COLORS=colors

install:clang ctags
	cat vimrc > ${FILE_VIMRC}
	mkdir ${DIR_VIM}
	cp -r ${DIR_COLORS} ${DIR_VIM}
	cp *.vim ${DIR_VIM}
	sudo apt-get install curl
	sudo apt-get install astyle
	curl -fLo ~/.vim/autoload/plug.vim --create-dirs \
	https://raw.githubusercontent.com/junegunn/vim-plug/master/plug.vim
	vim -c "PlugInstall"

update:
	cat vimrc > ${FILE_VIMRC}
	cp *.vim ${DIR_VIM}
	cp -r ${DIR_COLORS} ${DIR_VIM}

uninstall:
	rm -rf ~/.vim ~/.vimrc ~/.viminfo

help:
	@echo "make install"

clang:
	sudo apt-get -y install clang libclang-dev

ctags:
	sudo apt-get -y install exuberant-ctags
