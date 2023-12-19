// Addition without using addition operator
#include <stdio.h>
int main()
{
    int x, y;
    printf("enter first number :");
    scanf("%d", &x);
    printf("enter second number :");
    scanf("%d", &y);
    for (int i = 0; i < y; i++)
        x++;
    printf("sum is %d", x);
    return 0;
}
