#include<stdio.h>
void fun(int a[]){
    a[0]=10;
}
int main()
{
    int arr[4] = {3, 1, 4, 2};
    printf("%d\n",arr[0]);
    fun(arr);
    printf("%d\n",arr[0]);
    return 0; 
}