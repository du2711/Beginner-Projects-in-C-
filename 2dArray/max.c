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

    int cc,rr;
    int max=arr[0][0];
    for(rr=0;rr<r;rr++){
        for(cc=0;cc<c;cc++){
            if(max<arr[rr][cc]){
                max=arr[rr][cc];
            }
        }
    }

    printf("Maximum element:(%d,%d) ",rr,cc);
    printf("%d",max);
    return 0;
}

    // int r,c;
    // printf("Enter no. of row:");
    // scanf("%d",&r);
    // printf("Enter no. of columns: ");
    // scanf("%d",&c);
    // int arr[r][c];
    
    // printf("Enter your matrix: \n");
    // for(int i=0;i<r;i++){
    //     for(int j=0;j<c;j++){
    //         scanf("%d",&arr[i][j]);
    //     }
    // }

    // printf("Entered Matrix is: \n");
    // for(int i=0;i<r;i++){
    //     for(int j=0;j<c;j++){
    //         printf("%d ",arr[i][j]);
    //     }
    //     printf("\n");
    // }

    // int min=arr[0][0];
    // for(int i=0;i<r;i++){
    //     for(int j=0;j<c;j++){
    //         if(min>arr[i][j]){
    //             min=arr[i][j];
    //         }
    //     }
    // }

    // printf("%d",min);