#include <stdio.h>

int main(){
    int r,c;
    printf("Enter no. of row:");
    scanf("%d",&r);
    printf("Enter no. of columns: ");
    scanf("%d",&c);
    int arr[r][c];

    printf("Enter your matrix: \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Entered Matrix is: \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    printf("\nTransposed matrix is: \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<i;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}