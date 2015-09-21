FILE_VIMRC=${HOME}/.vimrc
DIR_VIM=${HOME}/.vim
DIR_COLORS=colors
DIR_CTAGS=ctags
DIR_MANUAL=/usr/share/man/man3/

install:clang
	cat vimrc > ${FILE_VIMRC}
	mkdir ${DIR_VIM}
	mkdir ${DIR_VIM}/${DIR_COLORS}
	mkdir ${DIR_VIM}/${DIR_CTAGS}
	cp ${DIR_COLORS}/* ${DIR_VIM}/${DIR_COLORS}
	cp ${DIR_CTAGS}/* ${DIR_VIM}/${DIR_CTAGS}
	sudo cp manC++/* ${DIR_MANUAL}
	cp plugins.vim ${DIR_VIM} 
	sudo apt-get install curl
	curl -fLo ~/.vim/autoload/plug.vim --create-dirs \
	https://raw.githubusercontent.com/junegunn/vim-plug/master/plug.vim
	vim -c "PlugInstall"

update:
	cp vimrc ${FILE_VIMRC}
	cp plugins.vim ${DIR_VIM}
	cp ${DIR_COLORS}/* ${DIR_VIM}/${DIR_COLORS}
	cp ${DIR_CTAGS}/* ${DIR_VIM}/${DIR_CTAGS}

set_default:
	rm -rf ~/.vim ~/.vimrc ~/.viminfo

help:
	@echo "install update set_default"

clang:
	sudo apt-get -y install clang libclang-dev
