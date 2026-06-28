#include<stdio.h>
int reverse(int *arr,int n){
    int i=0,j=n-1;
    while(i<j){
        if(arr[i]!=arr[j]){
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}
int main(){
    int n;
    printf("Enter no. of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter your array: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Your Array: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    if(reverse(arr,n)){
        printf("is Palindrome");
    }
    else{
        printf("is not a Palindrome");
    }
    return 0;
}