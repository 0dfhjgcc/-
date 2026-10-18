#include <stdio.h>

int main() {
    int t,ch[4],fin[600];
    char s[4][700];
    scanf("%d",&t);
    for (int i=0; i<t; i++) {
        for (int j=0;j<4; j++) {
        scanf("%s",s[j]);ch[j]=0;} 
        for (int j=0; j<4; j++) {
            for (int z=0; s[j][z]!='\0'; z++) {
                ch[j]++; }}
        if (ch[0]<ch[1]&&ch[0]<ch[2]&&ch[0]<ch[3]) { fin[i]='A';}
        else if (ch[1]<ch[0]&&ch[1]<ch[2]&&ch[1]<ch[3]) { fin[i]='B';}
        else if (ch[2]<ch[1]&&ch[2]<ch[0]&&ch[2]<ch[3]) { fin[i]='C';}   
        else if (ch[3]<ch[1]&&ch[3]<ch[2]&&ch[3]<ch[0]) { fin[i]='D';}
        else if (ch[0]>ch[1]&&ch[0]>ch[2]&&ch[0]>ch[3]) { fin[i]='A';}
        else if (ch[1]>ch[0]&&ch[1]>ch[2]&&ch[1]>ch[3]) { fin[i]='B';}
        else if (ch[2]>ch[1]&&ch[2]>ch[0]&&ch[2]>ch[3]) { fin[i]='C';}   
        else if (ch[3]>ch[1]&&ch[3]>ch[2]&&ch[3]>ch[0]) { fin[i]='D';}

        else {fin[i]='C';}}
    for (int i=0; i<t; i++) {printf("%c\n",fin[i]);}
    return 0;
}