#include<stdio.h>
int main(){
    int z[13] = {3, 4, 9, 6, 5, 8, 2, 7, 1, 0, 11, 14, 12};
    int x;
    printf("Enter the sum value: ");
    scanf("%d", &x);
    int triplets = 0;
    for(int i=0; i<=11; i++){
        for(int k=i+1; k<=12; k++){
            for(int d=k+1;  d<=12;d++){
                if(z[i] + z[k] + z[d] == x){
                    triplets++;
                    printf("(%d, %d ,%d)\n", z[i], z[k] ,z[d]);
                }
            }
        }
    } 
    printf("%d", triplets);
    return 0;
}