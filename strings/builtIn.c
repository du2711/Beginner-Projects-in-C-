#include<stdio.h>
#include<string.h>
int main(){
    char* str = "Hello, World!";
    int i = strlen(str);
    printf(" %d\n", i);

    char str1[15] = "Hello, Friend!";
    char str2[20];
    strcpy(str2, str1);
    printf(" %s\n", str2);

    char str3[20] = "Hello, Friend!";
    char str4[] = "How are you? ";
    strcat(str3, str4);
    printf("%s",str3);

    return 0;
}