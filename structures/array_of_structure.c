#include<stdio.h>
#include<string.h>  
int main()
{
    printf("Name and Stats of starter Pokemons:\n");
    typedef struct pokemon{
        int hp;
        int attack;
        int speed;
        char tier;
        char name[15];
    } pokemon;

    pokemon arr[3];
    arr[0].attack = 50;
    arr[0].hp = 100;
    arr[0].speed = 150;
    arr[0].tier = 'A';
    strcpy(arr[0].name, "Bulbasaur"); 

    arr[1].attack = 70;
    arr[1].hp = 130;
    arr[1].speed = 140;
    arr[1].tier = 'A';
    strcpy(arr[1].name, "Charmeleon");

    arr[2].attack = 90;
    arr[2].hp = 190;
    arr[2].speed = 150;
    arr[2].tier = 'B';
    strcpy(arr[2].name, "Squirtle");

    for(int i=0;i<3;i++){
        printf("Name: %s\n",arr[i].name);
        printf("Attack: %d\n",arr[i].attack);
        printf("HP: %d\n",arr[i].hp);
        printf("Speed: %d\n",arr[i].speed);
        printf("Tier: %c\n\n",arr[i].tier);
    }
    return 0;
}