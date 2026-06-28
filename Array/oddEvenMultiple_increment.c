#include<stdio.h>
int main(){
    int n;
    printf("Enter no. of Elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Entered Array is: \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++){
        if(i%2 == 0){
            arr[i] = arr[i] + 10;
        }
        else{
            arr[i] = arr[i]*2;
        }
    }

    printf("Your updated Array is: \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0; 
}