#include<stdio.h>
int main(){
    int n;
    printf("Enter no. of Elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter your Array: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Your Entered Array is: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    int brr[n];
    for(int i=0;i<n;i++){
        brr[i]=arr[n-i-1];
    }
    printf("\n Your Reversed array is: ");
    for(int i=0;i<n;i++){
        printf("%d ",brr[i]);
    }
    return 0;
}