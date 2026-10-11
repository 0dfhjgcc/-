#include <stdio.h>

int main() {
    int T,s,cnt;
    scanf("%d",&T);
    int n[10000],k[10000],a[10000][50];
    //shu ru
    for (int i=0; i!=T; i++) {
        scanf("%d%d",&n[i],&k[i]);
        for (int j=0; j!=n[i]; j++) {
            scanf("%d",&a[i][j]);}}
    //ji suan
    for (int i=0; i!=T; i++) {
        cnt=0;
        s=0;
        for (int j=0; j!=n[i]; j++) {
            if (a[i][j]>=k[i]) {s=s+a[i][j]; }
            if (a[i][j]==0&&s>=1) {cnt=cnt+1;
            s=s-1;}}
        printf("%d\n",cnt);
        
    }
    
    return 0;
}