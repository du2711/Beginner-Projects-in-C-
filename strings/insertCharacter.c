#include<stdio.h>
#include<string.h>
int main(){
    char str[20] = "college";
    for(int i=6;i>=3;i--){
        str[i+1] = str[i];
    }
    str[3] = 'X';
    printf("%s\n", str);
    return 0;
}