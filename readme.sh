#!/bin/sh
# =============================================================================
# Author:         scps950707
# Email:          scps950707@gmail.com
# Created:        2016-07-02 04:59
# Last Modified:  2016-07-02 23:51
# Filename:       update.sh
# =============================================================================

FILES="plugins.vim vimrc"
echo "#PluginMagnager"
echo "- [X] [vim-plug](https://github.com/junegunn/vim-plug)"
echo
echo
echo "#Plugins"
./findPlug.gawk $FILES
echo
echo
echo "#Key Mappings"
echo "|Mappings|Key|Target|"
echo "|-----------|----------|---------|"
./findMap.gawk $FILES
