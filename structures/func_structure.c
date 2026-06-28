#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct pokemon{
        int hp;
        int attack;
        int speed;
        char tier;
        char name[20];
    } pokemon; 
void func(pokemon p){
    printf("%d\n",p.hp);
    printf("%d\n",p.attack);
    printf("%d\n",p.speed);
    return; 
}
void change(pokemon p){
    p.hp = 100;
    p.attack = 200;
    p.speed = 300;
    return;
}
int main(){
    pokemon pikachu;
    pikachu.hp = 35;
    pikachu.attack = 55;
    pikachu.speed = 90;
    change(pikachu);
    //printf("%d",pikachu.hp);
    func(pikachu);
    return 0;
}                                                  