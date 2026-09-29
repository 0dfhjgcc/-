#include <stdio.h>

int main() {
    int n,a;
    scanf("%d",&n);
    a=n%2;
    if (a==0) {
        if (n>50) {
            printf("yes");}
        else {
            printf("no");
        }    
        }
    else {
        printf("no");
    }

    return 0;
}