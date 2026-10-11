#include <stdio.h>

int main() {
    int n,x=0;
    scanf("%d",&n);
    int a[n],b[n];
    for (int i=0; i<=n; i++) {
        x=0;
        scanf("%d",&a[i]);
        for (int j=0; j!=i; j++) {
            if(a[j]<a[i]){
                x=x+1;}}    
        b[i]=x;
        }
    for (int i=0; i!=n; i++){
        printf("%d ",b[i]);
    }
    return 0;
}