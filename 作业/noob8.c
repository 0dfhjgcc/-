#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d",&a,&b);
    int shang,yu;
    shang=a/b;
    yu=a%b;
    printf("%d %d",shang,yu);
    return 0;
}