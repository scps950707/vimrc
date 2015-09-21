FILE_VIMRC=${HOME}/.vimrc
DIR_VIM=${HOME}/.vim

install:clang
	cat vimrc > ${FILE_VIMRC}
	mkdir ${DIR_VIM}
	cp colors/* ${DIR_VIM}/colors
	cp ctags/* ${DIR_VIM}/ctags
	sudo cp manC++/* /usr/share/man/man3/
	cp plugins.vim ${DIR_VIM} 
	sudo apt-get install curl
	curl -fLo ~/.vim/autoload/plug.vim --create-dirs \
	https://raw.githubusercontent.com/junegunn/vim-plug/master/plug.vim
	vim -c "PlugInstall"

update:
	cp vimrc ${FILE_VIMRC}
	cp plugins.vim ${DIR_VIM}/
	cp ctags/* ${DIR_VIM}/ctags

set_default:
	rm -rf ~/.vim ~/.vimrc ~/.viminfo

help:
	@echo "install update set_default"

clang:
	sudo apt-get -y install clang libclang-dev
