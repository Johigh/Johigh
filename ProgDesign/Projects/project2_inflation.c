/*
Name: John Hightower
U#: 05320833
Description: The inflation rate is the percentage change in the price of products and services from one year to the next. For example,

In 2024, the average rate of inflation was 2.7%.
In 2023, the average rate of inflation was 4.1%.
In 2022, the average rate of inflation was 8.0%.
In 2021, the average rate of inflation was 4.7%.
In 2020, the average rate of inflation was 1.2%
Write a program that calculates an item’s price for the next 5 years, using the simplifying assumption that the inflation rate will stay constant – 3% per year. 
The output should display the anticipated price for the next 10 years. The program asks the user to enter the cost of an item for 2024.

Input format
You must read one floating point number indicating the price of an item.

Output
Anticipated price for the next 5 years
*/

#include <stdio.h> 
#define INFLATE_RATE .03

int main(){
    double price_24, p_25, p_26, p_27, p_28, p_29;

    printf("Enter the price of the item in 2024:");
    scanf("%lf", &price_24 );

    p_25 = (price_24 * INFLATE_RATE) + price_24;
    printf("The anticipated price in 2025 is %.2lf  \n", p_25);

    p_26 = (p_25 * INFLATE_RATE) + p_25;
    printf("The anticipated price in 2026 is %.2lf \n", p_26);

    p_27 = (p_26 * INFLATE_RATE) + p_26; 
    printf("The anticipated price in 2027 is %.2lf \n", p_27);

    p_28 = (p_27 * INFLATE_RATE) + p_27;
    printf("The anticipated price in 2028 is %.2lf \n", p_28);

    p_29 = (p_28 * INFLATE_RATE) + p_28;
    printf("The anticipated price in 2029 is %.2lf \n", p_29);

    return 0; 

}