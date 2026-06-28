#include <stdio.h>

int main(){
    int c;
    printf("Enter no. of  rows and columns: ");
    scanf("%d",&c);
    int arr[c][c];
    printf("Enter your matrix:\n");
    for(int i=0;i<c;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Waved Matrix is: \n");
    for(int i=0;i<c;i++){
        if(i%2==0){
            for(int j=0;j<c;j++){
                printf("%d ",arr[i][j]);
            }
        }
        else{
            for(int j=c-1;j>=0;j--){
                printf("%d ",arr[i][j]);
            }
        }
        printf("\n");
    }
    
    return 0;
}