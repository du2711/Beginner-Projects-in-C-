#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    int nsp =n/2;
    int nst =1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=nsp; j++){ //for spaces
            printf(" "); 
        }
        for(int k=1; k<=nst; k++){ //for stars
            printf("*");
        }
        if(i<n/2)
        {
            nsp--;
            nst+=2;
        }
        else
        {
            nsp++;
            nst-=2;
        }
        printf("\n"); 
    }
        if (n%2==0)
            for(int s=1; s<=nsp; s
            ++){ //for spaces  in even case
            printf(" "); 
        }
        for(int k=1; k<=nst; k++)
            printf("*");
    return 0;
}