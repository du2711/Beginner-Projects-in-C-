#include<stdio.h>
int main(){
    typedef struct date{
        int date;
        int month;
        int year;
    }date;
    date a,b;

    for(int i=0;i<1;i++){
        printf("enter date: ");
        scanf(" %d",&a.date);
        printf("enter month: ");
        scanf("%d",&a.month);
        printf("enter year: ");
        scanf("%d",&a.year);
    }
    printf("The dates entered are: \n");
    for(int i=0;i<1;i++){
        printf("%02d/%02d/%04d\n",a.date,a.month,a.year);
    }
    
    for(int i=0;i<1;i++){
        printf("enter date: ");
        scanf(" %d",&b.date);
        printf("enter month: ");
        scanf("%d",&b.month);
        printf("enter year: ");
        scanf("%d",&b.year);
    }
    printf("The dates entered are: \n");
    for(int i=0;i<1;i++){
        printf("%02d/%02d/%04d\n",b.date,b.month,b.year);
    }
    if(a.date == b.date && a.month == b.month && a.year == b.year){
        printf("Dates are equal\n");
    }
    else{
        printf("Dates are not equal\n");
    }
    return 0;
}