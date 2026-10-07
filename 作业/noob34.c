#include <stdio.h>

int main()  {
    int n,max=-10000,min=10000,a,i;
    scanf("%d",&n);
    for (i=0;i!=n;i++) {
        scanf("%d",&a);
        if (a>=max) {
            max=a;}
        if (a<=min) {
            min=a;
        }
    }
    printf("%d",max-min);
    return 0;
}
