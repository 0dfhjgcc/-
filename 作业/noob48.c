#include <stdio.h>

int main() {
    int n, m,a[1000][1000];
    long long x=0 ;
    scanf("%d%d",&n,&m);

    for (int i=0; i!=n; i++) {
        for (int j=0; j!=m; j++) {
            scanf("%d",&a[i][j]);}}
    for (int i=0; i!=n; i++) {
        for (int j=0; j!=m; j++) {
            x=x+a[i][j];}}
    printf("%lld",x);
    return 0;
}