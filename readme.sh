#!/bin/sh
# =============================================================================
# Author:         scps950707
# Email:          scps950707@gmail.com
# Created:        2016-07-02 04:59
# Last Modified:  2016-09-13 00:44
# Filename:       readme.sh
# =============================================================================
FILES="plugins.vim vimrc"
echo "#PluginMagnager" > README.md
echo "- [X] [vim-plug](https://github.com/junegunn/vim-plug)\n\n" >> README.md
echo "#Plugins" >> README.md
./readme.gawk $FILES >> README.md
echo "#Colorscheme" >> README.md
./readme.gawk colorscheme.vim >> README.md
