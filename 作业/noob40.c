#include <stdio.h>

int main() {
    int n,m;
    scanf("%d%d",&n,&m);
    long long a[1000][1000];
    for (int i=0; i!=1000; i++) {
        a[0][i]=1;}
    for (int i=0; i!=1000; i++) {
        a[i][0]=1;}
    for (int i=1; i!=n; i++) {
        for (int j=1; j!=m; j++) {
            a[i][j]=(a[i-1][j]+a[i][j-1])%(1000000000+7);}}
    long long x=a[n-1][m-1];
    printf("%lld",x);
    return 0;
}