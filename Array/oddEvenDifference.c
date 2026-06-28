#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter your elements: \n");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    printf("Your entered elements are : \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    int oddsum=0,evensum=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            evensum+=arr[i];
        }
        else{
            oddsum+=arr[i];
        }
    }
    int diff = oddsum - evensum;
    printf("\nDifference is: %d",diff);
    return 0;
}