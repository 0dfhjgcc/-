#include <stdio.h>

int main() {
    int n,i,a,b,c,x;
    scanf("%d",&n);
    for (i=1; n>=i; i++) {
        c=i;
        a=i%4;
        if (a==0) {continue;}
        while (c>0) {
            b=c%10;
            c=(c-b)/10;
            if (b==4) {break;}
        if (c==0) {
            printf("%d\n",i);}
        }
    }
    return 0;
}