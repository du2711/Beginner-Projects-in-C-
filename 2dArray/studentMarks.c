#include <stdio.h>

int main() {
    int n;
    printf("Enter no. of students: ");
    scanf("%d",&n);
    int mark[n][3];
    printf("Enter the details:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&mark[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d. ",i+1);
        for(int j=0;j<3;j++){
            printf("%d ",mark[i][j]);
        }
        printf("\n");
    }
    return 0;
}