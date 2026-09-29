#include <stdio.h>
int main() {
    int d, b;
    scanf("%d",&d);
    b=(++d)%7;
    if (b==0)
        b=7;
    printf("%d",b);
    return 0;
}