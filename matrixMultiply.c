#include<stdio.h>

int main(){
    int a[20][20],b[20][20],prod[20][20];
    int i,j,r1,c1,r2,c2;
    printf("Enter A matrix row and column size:\n");
    scanf("%d%d",&r1,&c1);
    printf("Enter B matrix row and column size:\n");
    scanf("%d%d",&r2,&c2);

    if(c1!=r2){
        printf("Matrix multiplication not possible\n");
        return 1;
    }
    printf("Enter A matrix:\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter B matrix:\n");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            prod[i][j]=0;
            for(int k=0;k<c1;k++){
                prod[i][j] = prod[i][j]+(a[i][k]*b[k][j]);
            } 
        }
    }
    printf("Product matrix is:\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            printf("%d ",prod[i][j]);
        }printf("\n");
    }
    return 0;
}