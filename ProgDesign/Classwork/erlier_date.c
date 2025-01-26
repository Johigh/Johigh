#include <stdio.h>
int main()
{
    int month1, day1, year1, month2, day2, year2;
    int first_earlier; // flag var.// //need to keep this not equal to anything since the comparison for
    //true or false will occur later in the if statements.// 

    printf("Enter first date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month1, &day1, &year1);
    printf("Enter second date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month2, &day2, &year2);

    if (year1 == year2 && month1 == month2 && day1 == day2){
        printf("same date.\n");
        return 0;
    }
    else
    {

        if (year1 != year2)
        {
            first_earlier = year1 < year2;
        }
        else if (month1 != month2)
        {
            first_earlier = month1 < month2;
        }
        else if(day1 != day2)
        {
            first_earlier = day1 < day2;
        }
        if (first_earlier)
        {
            printf("first date is earlier\n");
        }
        else
        {
            printf("second date is earlier\n");
        }
    }
    return 0;
}