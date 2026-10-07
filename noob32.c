#include <stdio.h>

int main() {
    int n,i,a=0,x=-1;
    scanf("%d",&n);
    for (i=1; n>=i; i++) {
        x=x*(-1);
        a=a+(i*x);
    
    }
    printf("%d\n",a);    

    return 0;
}