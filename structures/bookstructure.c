#include<stdio.h>
#include<string.h>
int main(){
    struct book
    {
       char name[50];
       int pages;
       float price;
    } a,b,c;

    a.pages = 300;
    a.price = 50;
    strcpy(a.name, "C Programming Language");

    b.pages = 350;
    b.price = 100;
    strcpy(b.name, "Python Programming Language"); 

    printf("Book A Details:\n");
    printf("Name starts with: %s\n", a.name);
    printf("Pages: %d\n", a.pages);
    printf("Price: %.f\n", a.price);

    printf("\nBook B Details:\n");
    printf("Name starts with: %s\n", b.name);
    printf("Pages: %d\n", b.pages);
    printf("Price: %.f\n", b.price);
    return 0;
}