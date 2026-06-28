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
    printf("\nsame elements are found on:\n");
    int i,j,same=0;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                printf("(%d,%d)as %d\n",i,j,arr[i]);
                same = 1;
            }
        }
    }
    if(same==0){
        printf("Duplicate not found");
    }
    return 0;
}