#include <stdio.h>

// int recursion(int n){
//     if (n==0){
//         return 1;
//     }
//     else{
//         return n* recursion(n-1);
//     }
// }
int main(){
    int n;
    printf("Enter no. of elements in the array: ");
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            printf("* ");
        }
        printf("\n");
    }
    // int res =recursion(n);
    // printf("%d",res);
    // int arr[n];
    // printf("Enter the array: ");
    // for(int i=0;i<n;i++){
    //     scanf("%d",&arr[i]);
    // }

    // // for(int i=0;i<n-1;i++){
    // //     for(int j=i+1;j<n;j++){
    // //         if(arr[i]==arr[j]){
    // //             printf("%d",arr[i]);
    // //             break;
    // //         }
    // //     }
    // // }

    // int sum=0;
    // for(int i=0;i<n;i++){
    //     sum+=arr[i];
    // }

    // int sn= n*(n+1)/2;

    // int me=sum-sn;

    // printf("missing element is: %d",me);
    return 0;
}