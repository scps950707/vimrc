#!/bin/sh
# =============================================================================
# Author:         scps950707
# Email:          scps950707@gmail.com
# Created:        2016-07-02 04:59
# Last Modified:  2016-07-03 01:38
# Filename:       readme.sh
# =============================================================================
FILES="plugins.vim vimrc"
./readme.gawk $FILES > README.md
