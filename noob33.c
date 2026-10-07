#include <stdio.h>

int main() {
    float n,a=0,i;
    scanf("%f",&n);
    for (i=1; n>=i; i++) {
        a=a+(1/i);
    }
    printf("%f",a);
    return 0;
}