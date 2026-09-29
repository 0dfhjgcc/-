#include <stdio.h>

int main() {
    int a,b,c,S,V;
    scanf("%d%d%d",&a,&b,&c);
    S=2*(a*b+b*c+c*a);
    V=a*b*c;
    printf("%d\n%d",S,V);

    return 0;
}