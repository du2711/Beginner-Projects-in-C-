#include<stdio.h>
int main(){
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int sumeven = 0, sumodd = 0;  
    for(int i = 0; i <=7; i++){
            if(i % 2 == 0){
                sumeven += arr[i];
            }
            else{
                sumodd += arr[i];
            }
        }
    int diff = sumeven - sumodd;
    printf("Difference between sum of even indexed and odd indexed elements: %d\n", diff);
    return 0; 
}