#!/bin/sh
# =============================================================================
# Author:         scps950707
# Email:          scps950707@gmail.com
# Created:        2016-07-03 00:33
# Last Modified:  2016-09-13 00:44
# Filename:       format.sh
# =============================================================================
TMPFILE=`mktemp /tmp/pluginsvim.XXXXX` || exit 1
./format.gawk plugins.vim > $TMPFILE
cat $TMPFILE > plugins.vim
rm -rf $TMPFILE

TMPFILE2=`mktemp /tmp/colorschemevim.XXXXX` || exit 1
./format.gawk colorscheme.vim > $TMPFILE2
cat $TMPFILE2 > colorscheme.vim
rm -rf $TMPFILE2
