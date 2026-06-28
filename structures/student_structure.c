#include<stdio.h>
#include<string.h>
typedef struct student{
        int roll_no;
        char name[50];
        char department[50];
        char course[50];
        int year_of_joining;
    }student;
    student s;
void check(student s1, student s2){
    if(s1.department == s2.department){
        printf("Same Department\n");
    }
    else{
        printf("Different Department\n");
    }
    return;
}
int main(){
    student s1,s2;
    for(int i=0;i<2;i++){
        printf("Enter roll number of s%d: ",i+1);
        scanf("%d",&s.roll_no);
        printf("Enter name%d: ",i+1);
        scanf("%s",s.name);
        printf("Enter department%d: ",i+1);
        scanf("%s",s.department);
        printf("Enter course%d: ",i+1);
        scanf("%s",s.course);
        printf("Enter year of joining%d: ",i+1);
        scanf("%d",&s.year_of_joining);
    }
    check(s1,s2);
    return 0;
}