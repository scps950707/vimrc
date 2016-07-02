#!/usr/bin/gawk -f
# =============================================================================
# Author:         scps950707
# Email:          scps950707@gmail.com
# Created:        2016-07-02 23:46
# Last Modified:  2016-07-02 23:51
# Filename:       findMap.awk
# =============================================================================
BEGIN{OFS="|"}
index($1,"map")>0{
    gsub("<","\\<")
    gsub(">","\\>")
    {$1=$1}
    table[$2]="|"$0"|"
}
END{
    n=asorti(table,sortedIndex)
    for(i=1;i<=n;i++)
        print table[sortedIndex[i]]
}
