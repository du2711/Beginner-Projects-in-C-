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
    for(int i=0;i<c;i++){
        for(int j=i+1;j<c;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    printf("Waved Matrix is: \n");
    for(int j=0;j<c;j++){
        if(j%2==1){
            for(int i=0;i<c/2;i++){
                int temp=arr[i][j];
                arr[i][j]=arr[c-1-i][j];
                arr[c-1-i][j]=temp;
            }
        }
    }
    for(int i=0;i<c;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}