#include <stdio.h>

int main() {
    int n,a,x=0;
    scanf("%d",&n);
    if (n<0) {n=-n;}
    while (n>0) {
        a=n%10;
        x=x+a;
        n=(n-a)/10;
    }
    printf("%d",x);
    return 0;
}