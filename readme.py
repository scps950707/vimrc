#!/usr/bin/env python3

# ==========================================================================
# Author:         scps950707
# Email:          scps950707@gmail.com
# Created:        2017-02-13 18:51
# Last Modified:  2017-03-18 03:08
# Filename:       readme.py
# ==========================================================================


def getDict(fname):
    plugList = dict()
    keyMapTable = dict()
    with open(fname, "r") as fp:
        for line in fp.read().splitlines():
            tmp = line.split(' ')
            if tmp[0] == 'Plug':
                plug = tmp[1].replace("'", "").replace(",", "")
                name = plug.split('/')[1]
                plugList.setdefault(name, [plug, True])
            elif tmp[0] == '"' and tmp[1] == 'Plug':
                plug = tmp[2].replace("'", "").replace(",", "")
                name = plug.split('/')[1]
                plugList.setdefault(name, [plug, False])
            elif 'map' in tmp[0]:
                keyMapTable.setdefault(
                    tmp[1],
                    [tmp[0], line.replace(tmp[0]+' '+tmp[1]+' ', '')])
    fp.close()
    return plugList, keyMapTable


if __name__ == "__main__":
    print("# PluginMagnager")
    print("- [X] [vim-plug](https://github.com/junegunn/vim-plug)\n\n")
    print("# Plugins")
    plugList, keyMapTable = getDict('plugins.vim')
    p1, k1 = getDict('vimrc')
    plugList.update(p1)
    keyMapTable.update(k1)
    for key in sorted(plugList):
        print('- {0} [{1}](https://github.com/{2})'.format(
                '[X]' if plugList[key][1] else '[ ]',
                key,
                plugList[key][0],
                ))

    print("\n\n# Key Mappings")
    print("|Mappings|Key|Target|")
    print("|-----------|----------|---------|")
    for key in sorted(keyMapTable):
        print('|{0}|{1}|{2}|'.format(
            keyMapTable[key][0],
            key.replace('<', '\<').replace('>', '\>'),
            keyMapTable[key][1].replace('<', '\<').replace('>', '\>')
            ))

    colp, colk = getDict('colorscheme.vim')
    print('\n\n# Colorscheme')
    for key in sorted(colp):
        print('- {0} [{1}](https://github.com/{2})'.format(
                '[X]' if colp[key][1] else '[ ]',
                key,
                colp[key][0],
                ))
