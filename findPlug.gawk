#!/usr/bin/gawk -f
# =============================================================================
# Author:         scps950707
# Email:          scps950707@gmail.com
# Created:        2016-07-02 23:49
# Last Modified:  2016-07-02 23:51
# Filename:       findPlug.awk
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
}
END{
    n=asorti(plugList,sortedIndex)
    for(i=1;i<=n;i++)
        print plugList[sortedIndex[i]]
}
