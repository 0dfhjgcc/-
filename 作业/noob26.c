#include <stdio.h>

int main() {
    double a, b,c,Avg;
    scanf("%lf%lf%lf",&a,&b,&c);
    Avg=(a+b+c)/3;
    if (Avg<60)
        printf("YES");
    else
        printf("NO");
    return 0;
}