#include <stdio.h>

int main() {
    int a=1, b=1,n=0,c,i=3,x;
    scanf("%d",&n);
    if (n==1) {
        printf("1");
        return 0;}
    if (n==2) {
        printf("1");
        return 0;}
    while (1) {
        if (n>=i) {
            c=a+b;
            i=i+1;
            x=c;}
        else {break;}
        if (n>=i) {
            a=c+b;
            i=i+1;
            x=a;}
        else {break;}
        if (n>=i) {
            b=a+c;
            i=i+1;
            x=b;}
        else {break;}}
        printf("%d\n",x);
    return 0;
}
