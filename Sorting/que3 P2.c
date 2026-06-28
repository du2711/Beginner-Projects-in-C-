#include <stdio.h>
int main(){
    int n;
    printf("Enter no. of elements: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    printf("sorted array: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    int first[n],sec[n];
    for(int i=0;i<n;i++){
        first[i] = arr[i];
    }
    if(arr[n-1]!= arr[n-2]){
        int temp=arr[n-1];
        arr[n-1]=arr[n-2];
        arr[n-2]=temp;
    }
    else{
        int temp=arr[n-1];
        arr[n-1]=arr[n-3];
        arr[n-3]=temp;
    }

    for(int i=0;i<n;i++){
        sec[i]=arr[i];
    }
    printf("\nFirst element: ");
    for(int i=0;i<n;i++){
        printf("%d",first[i]);
    }
    printf("\nSecond element: ");
    for(int i=0;i<n;i++){
        printf("%d",sec[i]);
    }
    int diff[n];
    for(int i=0;i<n;i++){
        diff[i]  = first[i]+sec[i];
    }
    
    printf("\nsum is: ");
    for(int i=0;i<n;i++){
        printf("%d",diff[i]);
    }
    return 0;
}