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
    int maxcount=0;
    int maxidx=-1;
    for(int i=0;i<r;i++){
        int count=0;
        for(int j=0;j<c;j++){
            if(arr[i][j]==1){
                count++;
            }
            if(maxcount<count){
                maxcount=count;
                maxidx=i;
            }
        }
        printf("\n");
    }
    printf("%d",maxidx);
    return 0;
}