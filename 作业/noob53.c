#include <stdio.h>
int main() {
    char s[1000000];
    scanf("%s",s);
    for(int i=0;s[i]!='\0';i++){
        if (s[i]=='5') {
            s[i]='*';}}
    puts(s);

    return 0;
}