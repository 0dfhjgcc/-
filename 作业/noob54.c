#include <stdio.h>
#include<string.h>
int main() {
    char s1[9],s2[9];
    scanf("%s%s",s1,s2);
    if (strcmp(s1, "elephant")==0&&strcmp(s2,"tiger")==0||strcmp(s1, "tiger")==0&&strcmp(s2,"cat")==0||strcmp(s1, "cat")==0&&strcmp(s2,"mouse")==0||strcmp(s1, "mouse")==0&strcmp(s2,"elephant")==0) {
        printf("win");}
    else if (strcmp(s2, "elephant")==0&&strcmp(s1,"tiger")==0||strcmp(s2, "tiger")==0&&strcmp(s1,"cat")==0||strcmp(s2, "cat")==0&&strcmp(s1,"mouse")==0||strcmp(s2, "mouse")==0&&strcmp(s1,"elephant")==0) {
        printf("lose");}
    else printf("tie");

    return 0;
}