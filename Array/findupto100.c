#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i]=i;
    }
    printf("Your entered elements are : \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    printf("\nsum is:%d",sum);
    return 0;
}