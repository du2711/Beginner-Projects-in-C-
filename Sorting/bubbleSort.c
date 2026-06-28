#include <stdio.h>
#include<stdbool.h>
int main(){
    int n;
    printf("Enter no. of elements: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter your elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n-1;i++){
        bool flag = true;
        for(int j=0;j<=n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp= arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag = false;
            }
        }
        if(flag == true) break;
    }

    printf("Sorted array in Ascending Order is: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    printf("\nArray in Descending Order is: ");
    for(int i=n-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
    return 0;
}