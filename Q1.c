// Even Odd
#include <stdio.h>
int main()
{
    int x;
    printf("enter integer: ");
    scanf("%d", &x);
    if (x % 2 == 0)
        printf("Integer is even");
    else
        printf("Integer is Odd");
    return 0;
}
