#include <stdio.h>
// int comb(int n,int r){
//     long long nfact=1;
//     long long rfact=1;
//     long long nrfact=1;

//     for(int i=2;i<=n;i++){
//         nfact*=i;
//     }
//     for(int i=2;i<=r;i++){
//         rfact*=i;
//     }
//     for(int i=2;i<=n-r;i++){
//         nrfact*=i;
//     }
//     return nfact/(rfact*nrfact);
// }
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    for(int i=0;i<=n;i++){
        int first=1;
        //printf("%d",first);
        for(int j=0;j<=i;j++){
            printf("%d ",first);
            first = first*(i-j)/(j+1);
        }
        printf("\n");
    }
    return 0;
}