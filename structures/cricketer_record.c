#include<stdio.h>
#include<string.h>
int main(){
    struct cricketer{
        char name[40];
        int age;
        int matches;
        float average;
    }
    cricketer[20];

    for(int p=0;p<3;p++){

        printf("Enter the name of cricketer %d:\n",p+1);
        scanf(" %[^\n]s",cricketer[p].name);
        printf("Enter the age of cricketer %d:\n",p+1);
        scanf("%d",&cricketer[p].age);
        printf("Enter the number of matches played by cricketer %d:\n",p+1);
        scanf("%d",&cricketer[p].matches);
        printf("Enter the average of cricketer %d:\n",p+1);
        scanf("%f",&cricketer[p].average);
    }

    for(int i=0;i<3;i++){
        printf("Cricketer Details:\n");
        printf("Name: %s\n",cricketer[i].name);
        printf("Age: %d\n",cricketer[i].age);
        printf("Average: %.2f\n",cricketer[i].average);
        printf("Matches: %d\n\n",cricketer[i].matches);
    }
    return 0;
}