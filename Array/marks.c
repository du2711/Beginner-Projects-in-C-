#include<stdio.h>
int main()
{
    int marks[10] = {45, 67, 89, 90, 56, 78, 99, 100, 34, 23};
    for(int i=0;i<10;i++)
    {
        if(marks[i]<35)
        {
           printf("The student with roll number %d have failed\n", i+1);
        }
    }


}