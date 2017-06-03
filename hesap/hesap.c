#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    double tip, tax;
    int pay1, pay2, totalCost;
    double mealCost;

    scanf("%lf", &mealCost);
    scanf("%d", &pay1);
    scanf("%d", &pay2);

    tip = mealCost * pay1 / 100;
    tax = mealCost * pay2 / 100;

    totalCost = round(mealCost + tip + tax);

    printf("The total meal cost is %d dollars.", totalCost);
}
