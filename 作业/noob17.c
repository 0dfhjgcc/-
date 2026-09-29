#include <stdio.h>

int main() {
    int mb,kb,b,整数;
    scanf("%d",&mb);
    kb=1024*mb;
    b=1024*kb;
    整数=b/4;
    printf("%d",整数);
    return 0;
}