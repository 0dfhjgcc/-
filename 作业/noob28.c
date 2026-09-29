#include <stdio.h>

int main() {
    int a,b,c,d,e,f,m;
    scanf("%1d%1d%1d%1d%1d%1d",&a,&b,&c,&d,&e,&f);
    m=e*10+f;
    if(3<=m&&m<=5)
        printf("spring");
    else if(6<=m&&m<=8)
        printf("summer");
    else if(9<=m&&m<=11)
        printf("autumn");
    else
        printf("winter");

    return 0;
}