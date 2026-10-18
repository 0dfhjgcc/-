#include <stdio.h>

int main() {
    int n, m;
    char s[105]; 

    scanf("%d %d", &n, &m);
    scanf("%s", s);         

    for (int i = 0; i < m; i++) {
        int l, r;
        char c1, c2;
        scanf("%d %d %c %c", &l, &r, &c1, &c2);
        for (int j = l - 1; j <= r - 1; j++) { 
            if (s[j] == c1) {
                s[j] = c2; }
           
        }
    }

    printf("%s\n", s);
    return 0;
}