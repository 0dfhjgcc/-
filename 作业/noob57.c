#include <stdio.h>

int main() {
    int n,x;
    scanf("%d",&n);
    char s[1004];
    x=n%26;
    scanf("%s",s);
    for (int i=0; s[i]!='\0'; i++) {
        s[i]=s[i]+x-96;
        if (s[i]>26) {s[i]=s[i]-26;}
        s[i]=s[i]+96;
    }
    puts(s);
    return 0;
}