#include <stdio.h>

int main() {
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
    int r;
    printf("\nEnter no. of rotation: ");
    scanf("%d",&r);

    int i=0,j=i+1;
    while(i<r){
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j++;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}