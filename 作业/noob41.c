#include <stdio.h>

int main() {
    long long  a[200];
    int i;
    for (i=0; 1; i++) {
        scanf("%lld",&a[i]);
        if (a[i]==0) {break;}}
    for (i=i; 1; i--) {
        if (i==0) {break;}
        printf("%lld ",a[i-1]);}
    return 0;
}