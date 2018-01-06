# =============================================================================
# Author:         scps950707
# Email:          scps950707@gmail.com
# Created:        2015-04-18 01:55
# Last Modified:  2018-01-07 02:12
# Filename:       makefile
# =============================================================================

FILE_VIMRC=${HOME}/.vimrc
DIR_VIM=${HOME}/.vim

install:
	mkdir -p ${DIR_VIM}
	cp vimrc ${FILE_VIMRC}
	cp *.vim ${DIR_VIM}
	sudo apt -y install curl astyle
	vim

update:
	cp vimrc ${FILE_VIMRC}
	cp *.vim ${DIR_VIM}

uninstall:
	rm -rf ~/.vim ~/.vimrc ~/.viminfo
