// Mini Calculator

#include <stdio.h>

int main()
{
    int num1, num2;
    char operator;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%d", &num2);

    switch (operator)
    {
    case '+':
        printf("Result: %d\n", num1 + num2);
        break;
    case '-':
        printf("Result: %d\n", num1 - num2);
        break;
    case '*':
        printf("Result: %d\n", num1 * num2);
        break;
    case '/':
        if (num2 != 0)
        {
            printf("Result: %.2f\n", (float)num1 / num2);
        }
        else
        {
            printf("Error: Division by zero is not allowed.\n");
        }
        break;
    case '%':
        printf("Result: %d\n", num1 % num2);
        break;
    default:
        printf("Error: Invalid operator.\n");
        break;
    }

    return 0;
}
// switch case
/* char a;
   switch(a){
   case '+':
   statement;
   break;
   lly case 2,3,4 etc
   default:
   printf("error");
   break;
} */
