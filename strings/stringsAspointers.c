#include<stdio.h>
#include<string.h>
int main()
{
    char str[]= "Hello, World!";
    char *ptr = str;
    int i;
    while(*ptr != '\0') {
        printf("%c", *ptr);
        ptr++;
        i++; 
    }
    return 0;
}