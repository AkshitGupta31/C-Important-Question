// Switch Case 2
#include <stdio.h>

int main()
{
    char gender;

    printf("Enter gender (M or F): ");
    scanf(" %c", &gender);

    switch (gender)
    {
    case 'M':
    case 'm':
        printf("Male\n");
        break;
    case 'F':
    case 'f':
        printf("Female\n");
        break;
    default:
        printf("Invalid input\n");
        break;
    }

    return 0;
}
