#include <stdio.h>
int main()
{
    int n;
    printf("Enter ending number: ");
    scanf("%d", &n);
    for(int i = 4; i <= n; i = i + 3)
    {
        printf("%d\n", i);
    }
    return 0;
}