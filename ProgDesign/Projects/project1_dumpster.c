/*
Name: John Hightower
U#: 05320833
Description: A local demolition contractor offers multiple sizes of roll-off dumpsters rentals.
Write a C program that calculates the cost for a dumpster rental.
The program prompts the user to input the dumpster selection, the number of days the dumpster will be rented.

The rental charges are structured as follows:

There is a flat fee for the first day of the rental. The first day flat fee does not apply to multi-week rental.
For rentals exceeding one day, an additional daily fee applies.
There exists a maximum per week charge for rentals, which is a better deal than renting seven days at daily rate.
If the calculated charge for a week or any time less than a week exceeds this maximum, the charge for that week will be capped at the maximum.
*/

#include <stdio.h>

int calculate_total(int intl_d, int rate, int total, int days, int max, int weeks)
{
    total = 0;

    if (days <= 1)
    {
        total = intl_d;
    }
    else
    {
        if (days >= 2)
            total = intl_d + (rate * days) - rate;

        if (days >= 7)
        {
            weeks = days / 7;
            int remaining_days = days % 7;
            total = (weeks * max) + (rate * remaining_days);
        }
        if (total > (weeks * max) + max)
        {
            total = (weeks * max) + max;
        }
    }

    return total;
}

int main()
{

    int selection;
    int intl_d;
    int rate;
    int max;
    int days;
    int total;
    int weeks;

    printf("Please select from four types of dumpsters: 1, 2, 3, and 4\n");
    printf("Enter dumpster selection:");
    scanf("%d", &selection);

    switch (selection)
    {
    case 1:
        intl_d = 120;
        rate = 80;
        max = 380;
        break;
    case 2:
        intl_d = 150;
        rate = 100;
        max = 420;
        break;
    case 3:
        intl_d = 180;
        rate = 120;
        max = 520;
        break;
    case 4:
        intl_d = 200;
        rate = 120;
        max = 600;
        break;
    default:
        printf("Invalid selection. Select from 1 to 4.\n");
        return 1;
    }

    printf("Enter days:");
    scanf("%d", &days);
    if (days < 0)
    {
        printf("Invalid days.\n");
        return 0;
    }

    total = calculate_total(intl_d, rate, total, days, max, weeks);

    printf("Charge($): %d", total);

    return 0;
}