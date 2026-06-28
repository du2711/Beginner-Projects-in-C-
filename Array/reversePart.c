#include <stdio.h>
void rev(int arr[], int s, int e,int n){
    for(int i=1,j=n-1;i<j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}
int main() {
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
    int s;
    printf("\nEnter starting element:");
    scanf("%d",&s);
    int e;
    printf("Enter Ending Element:");
    scanf("%d",&e);
    rev(arr,s,e,n);
    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}