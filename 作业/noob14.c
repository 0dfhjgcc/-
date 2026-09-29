#include <stdio.h>
#include <math.h>
int main() {
    int x1, x2,y1,y2;
    double E,M,a;
    scanf("%d%d",&x1,&y1);
    scanf("%d%d",&x2,&y2);
    E=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    M=fabs(x1-x2)+fabs(y1-y2);
    a=fabs(M-E);
    printf("%lf",a);
    return 0;
}