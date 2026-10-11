#include <math.h>
#include <stdio.h>
int main() {
    int T,n;
    scanf("%d",&T);
    int a[100][100000],b[100],jc[100];
    double fc[T],x,X;
    //输入数据
    for (int i=0; T!=i; i++) {
        scanf("%d",&b[i]);
        for (int j=0; j!=b[i]; j++) {
            scanf("%d",&a[i][j]);}
        fc[i]=0;}
    //计算
    for (int i=0; i!=T; i++) {
        //极差
        long long max=-1000000000,min=1000000000;
        for (int  j=0; j!=b[i]; j++) {
            if (max<a[i][j]) {max=a[i][j];}
            if (min>a[i][j]) {min=a[i][j];}}
        jc[i]=max-min;
        //方差
        X=0;
        x=0;
        for (int j=0; j!=b[i]; j++) {
            X=a[i][j]+X;
            if (j==b[i]-1) {x=X/(j+1);}}
        for (int j=0; j!=b[i]; j++) {
            fc[i]=fc[i]+(a[i][j]-x)*(a[i][j]-x);}
        fc[i]=fc[i]/b[i];
        }
    //输出
    for (int i=0; T!=i; i++){
        printf("%d %.3lf\n",jc[i],fc[i]);
    }
        
    
    return 0;
}