#include <stdio.h>

int main() {
    char s[104];
    int x=0,y;
    scanf("%s",s);
    for (int i=0; s[i]!='\0'; i++) {y=i;}
    for (int i=0;i<=y-2; i++) {
        if ((s[i]=='b'||s[i]=='B')&& (s[i+1]=='o'||s[i+1]=='O')&&(s[i+2]=='b'||s[i+2]=='B')) {
         printf("%d",i);
         x=1;
         break;
        }}
    if (x==0) {
        printf("-1");}

    return 0;
}