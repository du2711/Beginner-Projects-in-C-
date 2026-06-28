#include<stdio.h>
int main(){
    int arr[3][3];
    printf("Enter elements of 3x3 matrix:\n");
    for(int i=0;i<3;i++){
        for(int k=0;k<3;k++){
            scanf("%d",&arr[i][k]);
        }
    }
    printf("The entered matrix is:\n");
    for(int i=0;i<3;i++){
        for(int k=0;k<3;k++){
            printf("%d ",arr[i][k]);
        }
        printf("\n");
    }
    return 0;
}