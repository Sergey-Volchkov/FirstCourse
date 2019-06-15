#include <stdio.h>
char fst[10], *lst="    ";
int ttl;
main()
{
    int rt;
    rt = fscanf(stdin, "%s %s %d",fst,lst,&ttl);
    return rt=3;
}