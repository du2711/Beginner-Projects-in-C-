#include <stdio.h>
int main()
{
    int x , y;
    printf("Enter the coordinates of the point (x, y): ");
    scanf("%d %d", &x, &y);

    if (x==0 && y==0)
    {printf("The point (%d, %d) is at the Origin.\n", x, y);}
    else if (x==0)
    {printf("The point (%d, %d) lies on the Y-axis.\n", x, y);}
    else if (y==0)
    {printf("The point (%d, %d) lies on the X-axis.\n", x, y);}
    else
    {printf("The point (%d, %d) lies in graph but not on any axis.\n", x, y);
    }
    return 0;
}



