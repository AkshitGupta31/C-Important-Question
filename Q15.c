// LENGTH OF STRING WITHOUT USING LIBRARY FUNCTION
#include <stdio.h>
int main()
{
    char arr[100];
    printf("enter the string : ");
    // size
    scanf("%s", arr);
    int size = 0;
    int j = 0;
    while (arr[j] != '\0')
    {
        size++;
        j++;
    }
    printf("the length of string is %d", size);
    return 0;
}
// string input then int size untill '\0' comes and print size simple
