#include <stdio.h>

int main() {
    double K,F,C;
    scanf("%lf",&K);
    C=K-273.15;
    F=(C*1.8)+32;
    printf("%lf",F);
    return 0;
}