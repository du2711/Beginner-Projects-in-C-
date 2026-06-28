#include<stdio.h>
#include<string.h>
int main(){
    typedef union pokemon{
        int hp;
        int attack; 
        int speed;
        char tier;
        char name[20];
    } pokemon;
    pokemon pikachu;
    pikachu.hp = 35;
    pikachu.attack = 55;
    pikachu.speed = 90;
    pikachu.tier = 'B';
    strcpy(pikachu.name,"Pikachu");
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);
    printf("%c\n",pikachu.tier);
    printf("%s\n",pikachu.name);
    return 0;
}