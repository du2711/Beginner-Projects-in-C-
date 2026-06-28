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

    int minr=0,maxr=r-1,minc=0,maxc=c-1,tne=r*c,count=0;

    printf("Spiral Loop");
    while(count<tne){
        for(int j=minc;j<=maxc;j++){
            printf("%d ",arr[minr][j]);
            count++;
        }
        minr++;
        if(count>=tne) break;

        for(int i=minr;i<=maxr;i++){
            printf("%d ",arr[i][maxc]);
            count++;
        }
        maxc--;
        if(count>=tne) break;

        for(int j=maxc;j>=minc;j--){
            printf("%d ",arr[maxr][j]);
            count++;
        }
        maxr--;
        if(count>=tne) break;

        for(int i=minc;i>=minr;i--){
            printf("%d ",arr[i][minc]);
            count++;
        }
        minc++;
        if(count>=tne) break;
    }

    return 0;
}