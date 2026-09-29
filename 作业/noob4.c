#include <stdio.h>

int main() {
    char a[10000];
    fgets(a,10000,stdin);
    printf("%s",a);
    return 0;
}