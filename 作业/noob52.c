#include <stdio.h>

int main() {
    int n,m,b,x=0;
    scanf("%d%d",&n,&m);
	char a[1002][1002];
	for(int i=0;i<1002;i++){
		for(int j=0;j<1002;j++){
			a[i][j]=0;}}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			scanf(" %c",&a[i][j]);}}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){ 
            if(a[i][j]=='.'){
                a[i][j]=a[i][j]+2;
                if(a[i-1][j-1]==42){a[i][j]++;}
                if(a[i-1][j]==42){a[i][j]++;}
                if(a[i-1][j+1]==42){a[i][j]++;}
                if(a[i][j-1]==42){a[i][j]++;}
                if(a[i][j+1]==42){a[i][j]++;}
                if(a[i+1][j-1]==42){a[i][j]++;}
                if(a[i+1][j]==42){a[i][j]++;}
                if(a[i+1][j+1]==42){a[i][j]++;}} }}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
            printf("%c",a[i][j]);
 
         }
        printf("\n") ; }
    return 0;
}