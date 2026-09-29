#include <stdio.h>

int main() {
    int s,m,h,s1;
    scanf("%d",&s);
    h=s/3600;
    m=(s-h*3600)/60;
    s1=s-m*60-h*3600;
    printf("%d %d %d",h,m,s1);
    return 0;
}