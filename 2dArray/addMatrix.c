#include <stdio.h>

int main() {
    int a;
    printf("Enter no. of rows and column: ");
    scanf("%d",&a);
    int arr[a][a],brr[a][a];
    printf("Enter matrix A: \n");
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter matrix B:\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            scanf("%d",&brr[i][j]);
        }
    }
    int sum[a][a];
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            sum[i][j]=arr[i][j]+brr[i][j];
        }
    }
    printf("The sum amtrix is: \n");
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}