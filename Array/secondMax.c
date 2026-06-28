#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter your array: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enterd array  is: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    int max = arr[0];
    for(int i=0;i<n;i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    int smax = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i] < max && smax < arr[i]){
            smax = arr[i];
        }
    } 
    printf("\nSecond Largest no. is: %d",smax);
    return 0;
}