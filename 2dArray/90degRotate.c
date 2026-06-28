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
    printf("Your Enterd Matrix is:\n");
    for(int i=0;i<c;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<c;i++){
        for(int j=0;j<i;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    for(int i=0;i<c;i++){
        int j=0,k=c-1;
        while(j<k){
            int temp=arr[i][j];
            arr[i][j]=arr[i][k];
            arr[i][k]=temp;
            j++;
            k--;
        }
    }
    printf("\nRotated matrix is: \n");
    for(int i=0;i<c;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}