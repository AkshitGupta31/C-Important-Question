// Rate Of Interest
#include <stdio.h>

int main()
{
    float principleAmount, rateOfInterest, totalInterest;

    printf("Enter the principle amount (Rs.): ");
    scanf("%f", &principleAmount);

    if (principleAmount >= 10000)
    {
        rateOfInterest = 0.2;
    }
    else if (principleAmount >= 8000 && principleAmount <= 9999)
    {
        rateOfInterest = 0.18;
    }
    else
    {
        rateOfInterest = 0.16;
    }

    totalInterest = principleAmount * rateOfInterest;

    printf("The total interest based on the given conditions is: Rs. %.2f\n", totalInterest);

    return 0;
}
