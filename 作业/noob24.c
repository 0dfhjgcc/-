#include <stdio.h>

int main() {
    int n,y,n1;
    scanf("%d",&n1);
    n=n1%2;
    if (n==1) {
        y=(3*n1)+1;}
    else if(n==0){
        y=n1/2;}
    printf("%d",y);

    return 0;
}