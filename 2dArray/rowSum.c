#include <stdio.h>
#include<limits.h>
int main(){
    int r,c;
    printf("Enter no. of rows: ");
    scanf("%d",&r);
    printf("Enter no. of columns: ");
    scanf("%d",&c);

    int arr[r][c];
    printf("Enter your matrix\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Your enterd matrix is: \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int sum=0;
    int max=INT_MIN;
    for(int i=0;i<r;i++){
        int rsum=0;
        for(int j=0;j<c;j++){
            rsum=rsum+arr[i][j];
        }
        printf("sum of row %d is:%d\n",i+1,rsum);
        if(rsum>max){
            max=rsum;
        }
    }
    printf("max row sum: %d\n",max);
    return 0;
}