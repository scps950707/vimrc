#!/usr/bin/env python3

# ==========================================================================
# Author:         scps950707
# Email:          scps950707@gmail.com
# Created:        2017-02-14 01:52
# Last Modified:  2017-02-14 02:53
# Filename:       format.py
# ==========================================================================

import sys

plugList = dict()

with open(sys.argv[1], 'r') as fp:
    content = fp.read().splitlines()
    for head in content[0:7]:
        print(head)
    for line in content[7:]:
        tmp = line.split(' ')
        if tmp[0] == 'Plug':
            plug = tmp[1].replace("'", "").replace(",", "")
            plugList.setdefault(plug, [[line], True])
        elif tmp[0] == '"' and tmp[1] == 'Plug':
            plug = tmp[2].replace("'", "").replace(",", "")
            plugList.setdefault(plug, [[line], False])
        else:
            plugList[plug][0].append(line)
    enabled = ""
    disabled = ""
    for key in sorted(plugList):
        for line in plugList[key][0]:
            if plugList[key][1]:
                enabled += line+'\n'
            else:
                disabled += line+'\n'
    print(enabled, end = '')
    print(disabled, end = '')
fp.close()
