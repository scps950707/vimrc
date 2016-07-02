#!/usr/bin/gawk -f
# =============================================================================
# Author:         scps950707
# Email:          scps950707@gmail.com
# Created:        2016-07-02 23:57
# Last Modified:  2016-07-03 00:40
# Filename:       format.gawk
# =============================================================================
NR<=7{print $0}
NR>7{
    if($1=="Plug")
    {
        enable++
        plugEnableList[enable]=$0
    }
    else if($1=="\"" && $2=="Plug")
    {
        disable++
        plugDisableList[disable]=$0
    }
    else
    {
        plugEnableList[enable]=plugEnableList[enable]"\n"$0
    }
}
END{
    n=asort(plugEnableList)
    for(i=1;i<=n;i++)
        print plugEnableList[i]
    n=asort(plugDisableList)
    for(i=1;i<=n;i++)
        print plugDisableList[i]
}
