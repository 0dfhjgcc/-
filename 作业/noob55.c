#include <stdio.h>

int main() {
    int i;
    char n[11],a[12];
    scanf("%s",n);
    for (i=0; n[i]!='\0'; i++) {}
    a[(i-1)/3+i]='\0';
    int j=(i-1)/3;
    for (i=i+(i-1)/3-1; i>=0; i--) {
        for (int y=0; y!=3&&i>-1; i--,y++) {
            a[i]=n[i-j];}
        a[i]=','; 
        j--;}
        puts(a);
      
    return 0;
}