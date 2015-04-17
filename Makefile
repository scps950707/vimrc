FILE_VIMRC=${HOME}/.vimrc
DIR_VIM=${HOME}/.vim

install:
	@echo '--Starting install vim setting...--'
	cat _vimrc > ${FILE_VIMRC}
	cp -a _vim ${DIR_VIM} 
	git clone git://github.com/Shougo/neobundle.vim ${DIR_VIM}/bundle/neobundle.vim
	git clone https://github.com/eugeii/consolas-powerline-vim.git ${HOME}/.fonts/consolas-powerline-vim
	@echo '--Done!--'

update:
	cp -a _vimrc ${FILE_VIMRC}
	cp -a _vim/plugins.vim ${DIR_VIM}/

default_setting:
	rm -rf ~/.vim ~/.vimrc ~/.viminfo
