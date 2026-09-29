#include <stdio.h>

int main() {
    int a,b,c,d,e,f;
    scanf("%d",&a);
    c=a%100;
    d=a%10;
    e=c-d;
    f=e/10;
    printf("%d",f);
    return 0;
}