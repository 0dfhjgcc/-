#include <stdio.h>

int main() {
    int n,a100,a400,a4;
    scanf("%d",&n);
    a100=n%100;
    a400=n%400;
    a4=n%4;
    if(a4==0)
        if(a100==0)
            if(a400==0)
                printf("yes");
            else
                printf("no");
        else
            printf("yes");
    else
        printf("no");
    return 0;
}