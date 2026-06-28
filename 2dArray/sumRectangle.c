#include <stdio.h>

int main() {
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

    int sum=0;
    int r1,r2,c1,c2;
    printf("Enter starting row: ");
    scanf("%d",&r1);
    printf("Enter starting column: ");
    scanf("%d",&c1);
    printf("Enter ending row: ");
    scanf("%d",&r2);
    printf("Enter ending column: ");
    scanf("%d",&c2);
    r1--,c1--,r2--,c2--;

    printf("Chosen Submatrix:\n");
    for(int i = r1; i <= r2; i++) {
        for(int j = c1; j <= c2; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for(int i=r1;i<=r2;i++){
        for(int j=c1;j<=c2;j++){
            sum+=arr[i][j];
        }
    }

    printf("Sum is: %d",sum);
    return 0;
}