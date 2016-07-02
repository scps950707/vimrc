#!/usr/bin/gawk -f
# =============================================================================
# Author:         scps950707
# Email:          scps950707@gmail.com
# Created:        2016-07-02 23:49
# Last Modified:  2016-07-03 01:34
# Filename:       readme.gawk
# =============================================================================
{
    if($1=="Plug")
    {
        gsub("[',]","")
        split($2,plugname,"/")
        plugList[plugname[2]]="- [X] ["plugname[2]"](https://github.com/"$2")"
    }
    if($1=="\"" && $2=="Plug")
    {
        gsub("[',]","")
        split($3,plugname,"/")
        plugList[plugname[2]]="- [ ] ["plugname[2]"](https://github.com/"$3")"
    }
    if(index($1,"map")>0)
    {
        gsub("<","\\<")
        gsub(">","\\>")
        for(i=1;i<=NF;i++)
        {
            keyMapTable[$2]=keyMapTable[$2]"|"$i
        }
        keyMapTable[$2]=keyMapTable[$2]"|"
    }
}
END{
    print "#PluginMagnager"
    print "- [X] [vim-plug](https://github.com/junegunn/vim-plug)"
    print ""
    print ""
    print "#Plugins"
    n=asorti(plugList,sortedIndex)
    for(i=1;i<=n;i++)
        print plugList[sortedIndex[i]]
    print ""
    print ""
    print "#Key Mappings"
    print "|Mappings|Key|Target|"
    print "|-----------|----------|---------|"
    n=asorti(keyMapTable,sortedIndex)
    for(i=1;i<=n;i++)
        print keyMapTable[sortedIndex[i]]
}
