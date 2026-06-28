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
    int e;
    printf("Enter element you want to find: ");
    scanf("%d",&e);
    int check =0;
    int i;
    for(i =0;i<n;i++){
        if(e==arr[i]){
            check =1;
            break;
        }
    }
    if(check==1){
        printf("\n%d is present on position:%d \nAt index:%d", e,i+1,i);
    }
    else{
        printf("\nElement not found");
    }
    return 0;
}