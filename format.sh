#!/bin/sh
# =============================================================================
# Author:         scps950707
# Email:          scps950707@gmail.com
# Created:        2016-07-03 00:33
# Last Modified:  2016-07-03 00:40
# Filename:       format.sh
# =============================================================================
TMPFILE=`mktemp /tmp/pluginsvim.XXXXX` || exit 1
./format.gawk plugins.vim > $TMPFILE
cat $TMPFILE > plugins.vim
