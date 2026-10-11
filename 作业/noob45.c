#include <stdio.h>

int main() {
    int n,x,a[1000000],j,b,z=0;
    scanf("%d%d",&n,&x);
    for (int i=1; i<=n; i++) {
        j=i;
        b=0;
        a[i]=0;
        while (j>0) {
            b=j%10;
            j=(j-b)/10;
            if (b==x) {a[i]=a[i]+1;}}}
    for (int i=1; i<=n; i++){
        z=a[i]+z;   }
    printf("%d\n",z);
}