FILE_VIMRC=${HOME}/.vimrc
DIR_VIM=${HOME}/.vim

install:clang
	@echo "start install"
	cat _vimrc > ${FILE_VIMRC}
	mkdir ${DIR_VIM}
	cp -a colors/ ${DIR_VIM}/colors
	cp -a keyword/ ${DIR_VIM}/bundle/keyword
	cp plugins.vim ${DIR_VIM} 
	git clone git://github.com/Shougo/neobundle.vim ${DIR_VIM}/bundle/neobundle.vim
	git clone https://github.com/eugeii/consolas-powerline-vim.git ${HOME}/.fonts/consolas-powerline-vim
	@echo "finish"

update:
	cp -a _vimrc ${FILE_VIMRC}
	cp -a plugins.vim ${DIR_VIM}/
	cp -a keyword/ ${DIR_VIM}/bundle/keyword

set_default:
	rm -rf ~/.vim ~/.vimrc ~/.viminfo
	rm -rf ${HOME}/.fonts/consolas-powerline-vim

help:
	@echo "install update set_default"

clang:
	sudo apt-get -y install clang libclang-dev
