#include <stdio.h>
#include<stdbool.h>
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
    for(int i=0;i<n;i++){
        bool num=false;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                num=true;
                break;
            }
        }
        if(num==false){
            printf("%d ",arr[i]);
        }
    }
    return 0;
}