#include <stdio.h>
void sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main(){
    int n;
    printf("Enter no. of elements: ");
    scanf("%d",&n);

    int arr[n];
    printf("enter elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    sort(arr,n);
    printf("Sorted array: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    long long num1=0,num2=0;
    for (int i=0;i<n;i++){
        if(i%2==0){
            num1=num1*10+arr[i];
        }
        else{
            num2=num2*10+arr[i];
        }
    }
    printf("\nNumber 1: %lld",num1);
    printf("\nNumber 2: %lld",num2);
    printf("\nSum is: %lld",num1+num2);
    return 0;
}