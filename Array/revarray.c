#include <stdio.h>

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

    int i=0,j=n-1,temp;
    while(i<j){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    printf("\n Rverse array is: ");
    for(int p=0;p<n;p++){
        printf("%d ",arr[p]);
    }
    return 0;
}