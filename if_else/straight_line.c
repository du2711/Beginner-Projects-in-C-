#include <stdio.h>
int main()
{
    int x1, y1, x2, y2, x, y;
    printf("Enter the coordinates of first point (x1, y1): ");
    scanf("%d %d", &x1, &y1);
    printf("Enter the coordinates of second point (x2, y2): ");
    scanf("%d %d", &x2, &y2);
    printf("Enter the coordinates of the point to check (x, y): ");
    scanf("%d %d", &x, &y);

    // Check if the point (x, y) lies on the line segment between (x1, y1) and (x2, y2)
    if ((y2 - y1) * (x - x1) == (y - y1) * (x2 - x1))
    {printf("The point (%d, %d) lies on the line segment between (%d, %d) and (%d, %d).\n", x, y, x1, y1, x2, y2);}
    else
    {printf("The point (%d, %d) does not lie on the line segment between (%d, %d) and (%d, %d).\n", x, y, x1, y1, x2, y2);
    }
    return 0;
}