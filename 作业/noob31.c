#include <stdio.h>

int main() {
    int n,a,i,b;
    scanf("%d",&n);
    for(i=2;n!=0;n--) {
        scanf("%d",&a);
        if (a==1) {
            printf("No\n");
            continue;
        }
        if (a==2) {
            printf("Yes\n");
            continue;
        }
        for (i=2;i!=a;i++) {
            b=a%i;
            if(b==0){
                printf("No\n");
                break;
            }
        }
        if(i==a){
            printf("Yes\n");
        }
    }

    return 0;
}
