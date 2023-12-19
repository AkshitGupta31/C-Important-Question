// BUBBLE SORT
#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n;
    printf("enter the number of integers :");
    scanf("%d", &n);
    int arr[n];
    printf("enter the integers :");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (int i = 0; i < n - 1; i++)
    {
        bool flag = true;
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = false;
            }
        }
        if (flag == true)
            break;
    }
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
// just simply input array then inside loop if condition n>n+1 th element
// swap code and then print array.
