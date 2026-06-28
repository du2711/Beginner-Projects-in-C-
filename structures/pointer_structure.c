#include<stdio.h>
#include<string.h>
#include<stdbool.h>
// also (*p).hp can be written as p->hp
typedef struct pokemon{
        int hp;
        int attack;
        int speed;
        char tier;
        char name[20];
    } pokemon; 
int main(){
    pokemon pikachu = {35,55,90,'B',"Pikachu"};
    // pikachu.hp = 35;
    // pikachu.attack = 55;
    // pikachu.speed = 90;
    // pikachu.tier = 'B';
    // strcpy(pikachu.name,"Pikachu");
    pokemon *p= &pikachu;
    // printf("%p",p);
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);   
    printf("%c\n",pikachu.tier);
    printf("%s\n",pikachu.name);

    (*p).hp=100;
    printf("%d",pikachu.hp);
    
    return 0;
}                                                  