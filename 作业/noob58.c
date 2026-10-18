#include <stdio.h>

int main() {
    int n,a;
    scanf("%d",&n);
    char s[3000];
    for (int i=1; i<1000; i++) {a=a+sprintf(s+a,"%d",i);}
    printf("%c",s[n-1]);


    return 0;
}