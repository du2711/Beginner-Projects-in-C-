#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    typedef struct pokemon{
        int hp;
        int attack;
        int speed;
        char tier;
        char name[15];
    } pokemon;
    typedef struct legendary_pokemon{
        pokemon normal;
        char ability[18];
    } legendary_pokemon;
    typedef struct godpokemon{
        legendary_pokemon legend;
        int powerlevel;
    }godpokemon;
    
    godpokemon arceus;
    arceus.powerlevel = 1000;
    strcpy(arceus.legend.ability, "turns to stone");
    arceus.legend.normal.hp = 200;
    arceus.legend.normal.attack = 200;
    strcpy(arceus.legend.normal.name, "Arceus");

    legendary_pokemon lugia;
    lugia.normal.hp = 106;
    lugia.normal.attack = 90;
    lugia.normal.speed = 130;
    lugia.normal.tier = 'L';
    strcpy(lugia.normal.name, "Lugia");
    strcpy(lugia.ability, "Pressure");

    printf("God Pokemon Details:\n");
    printf("Name: %s\n",arceus.legend.normal.name);
    printf("Power Level: %d\n",arceus.powerlevel);
    printf("Ability: %s\n",arceus.legend.ability);
    printf("HP: %d\n",arceus.legend.normal.hp);
    printf("Attack: %d\n",arceus.legend.normal.attack);

    return 0;
}