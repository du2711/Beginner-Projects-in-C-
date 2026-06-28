#include <stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("Enter no. of elements: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n-1;i++){
        int min=  INT_MAX;
        int minIndex = -1;
        for(int j=i;j<=n-1;j++){
            if(min>arr[j]){
                min=arr[j];
                minIndex = j;
            }
        }
        int temp=arr[minIndex];
        arr[minIndex]=arr[i];
        arr[i]=temp;
    }

    printf("Sorted Array: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}