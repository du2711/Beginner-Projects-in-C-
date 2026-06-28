#include <stdio.h>
#include<stdbool.h>

void sort(int arr[],int n){
    for(int i=0;i<n;i++){
        bool flag = true;
        for(int j=n-1;j>0;j--){
            if(arr[j]>arr[j-1]){
                int temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
                flag=false;
            }
        }
        if(flag == true) break;
    }
    return;
}

int main(){
    int n;
    printf("Enter no. of elements in Array: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    sort(arr,n);

    printf("Sorted Array: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}