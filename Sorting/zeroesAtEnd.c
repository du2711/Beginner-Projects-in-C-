#include <stdio.h>
#include<stdbool.h>
void sort(int arr[], int n){
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
}
int main(){
    int n;
    printf("Enter no. of elements: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter your elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    // int ans[n];
    // int idx=0;
    
    sort(arr,n);

    // for(int i=0;i<n;i++){
    //     if(arr[i]!=0){
    //         ans[idx]=arr[i];
    //         idx++;
    //     }
    // }

    // while(idx!=n){
    //     ans[idx]=0;
    //     idx++;
    // } 
    
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]==0){
                int temp= arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("Arranged array: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
