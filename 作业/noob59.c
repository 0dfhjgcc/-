#include <stdio.h>

int main() {
    char s[51],fin;
    for(int j=0;scanf("%s",s)!=EOF;j++){
        fin=s[0];
        if (fin>='a') {fin=fin-'a'+'A'; }
        printf("%c",fin);}

    
    return 0;
}