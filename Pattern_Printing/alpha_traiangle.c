#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    int a=1;
    for (int i=1; i<=n; i=i+1){
        for (int k=1;k<=n-i;k=k+1) // for spaces
        {
            printf(" ");
        }
        
        for(int j=1; j<=a; j=j+1){
            int d= j+64;
        char ch=(char)d;
        printf("%c ",ch);
        }
        a=a+2;
        printf("\n");
    }
    return 0;
}