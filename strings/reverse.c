#include<stdio.h>
#include<string.h>
int main()
{
    char str[100]; 
    puts("Enter a string: ");
    gets(str);
    puts("Reversed string is: ");
    for(int i= strlen(str) - 1; i >= 0; i--) {
        putchar(str[i]);
    }
    return 0;
}