#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon
    {
       int hp;
       int attack;
       int speed;
       char tier;
       char name[15];
    } pokemon;
    pokemon a,b,c;

    a.attack  = 50;
    a.hp      = 100;
    a.speed   = 150;
    a.tier    = 'A';
    strcpy(a.name, "Bulbasaur");

    // b.attack  = 70;
    // b.hp      = 130;
    // b.speed   = 140;
    // b.tier    = 'A';
    // strcpy(b.name, "Charmeleon");

    b=a; // deep copy
    //if one stat or data is changed. For example
    strcpy(b.name, "Venusaur");
    printf("Name: %s\n",a.name);
    return 0;
}