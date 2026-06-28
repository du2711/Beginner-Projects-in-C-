#include<stdio.h>
int main(){
    struct pokemon
    {
       int hp;
       int attack;
       int speed;
       char tier;
    };

    struct pokemon pikachu;
    pikachu.hp = 35;
    pikachu.attack = 55;
    pikachu.speed = 90;
    pikachu.tier = 'A';
    
    struct pokemon charizard;
    charizard.hp = 78;
    charizard.attack = 84;
    charizard.speed = 100;
    charizard.tier = 'S';
    
    printf("Pikachu's Stats:\n");
    printf("HP: %d\n", pikachu.hp); 
    return 0;
}