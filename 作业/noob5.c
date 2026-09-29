#include <stdio.h>

int main() {
    int a;
    long long b;
    float c;
    char d;
    char e[1000];
    scanf("%d",&a);
    scanf("%lld",&b);
    scanf("%f",&c);
    scanf(" %c",&d);
    scanf("%s",e);
    printf("%d\n",a);
    printf("%lld\n",b);
    printf("%.1f\n",c);
    printf("%c\n",d);
    printf("%s\n",e);
    return 0;
}