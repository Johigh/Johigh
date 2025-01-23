#include <stdio.h>
// #define QUARTER 25
// #define DIME 10
// #define NICKEL 5
// #define PENNY 1
// int main()
// {
// //initialize variables and read input
// int cents, pennies, quarters, dimes, nickels;
// pennies = quarters = dimes = nickels =0;
// printf("Enter the number of cents:\n");
// scanf("%d", &cents);
// //check the range of the input amount
// if(cents< 0 || cents > 10000)
// printf("Invalid amount %d,\nAmount must be between 0 and 10000, inclusive\
// n", cents);
// else {
// quarters = cents/QUARTER;  //Cents will be divided by 25 - this is already defined at beginning of code//
// dimes = cents%QUARTER/DIME; 
// nickels = cents%QUARTER%DIME/NICKEL;
// pennies = cents%QUARTER%DIME%NICKEL;
// printf("Quarters: %d\n", quarters);
// printf("Dimes: %d\n", dimes);
// printf("Nickels: %d\n", nickels);
// printf("Pennies: %d\n", pennies);
// }
// return 0;
// }

//Rudimentary versions//

//187 cents should be - 1Q, 1D, 0N, 2P //

#include <stdio.h>
#define QUARTERS 25
#define NICKELS 5
#define DIMES 10
#define PENNIES 1


int main(){
int cents, quarters, dimes, nickels, pennies = 0; 
printf("Enter cents: ");
scanf("%d", &cents);
if(cents < 0 || cents > 10000){
    printf("enter positive number\n");
}
else{
    
quarters = cents/QUARTERS;  //Cents will be divided by 25 - this is already macro defined at beginning of code//
cents = cents%QUARTERS;
dimes = cents/DIMES;
cents = cents%DIMES;
nickels = cents/NICKELS;
cents = cents%NICKELS;
pennies = cents/PENNIES;
cents = cents%PENNIES;
printf("Quarters: %d\n", quarters);
printf("Dimes: %d\n", dimes);
printf("Nickels: %d\n", nickels);
printf("Pennies: %d\n", pennies);
}
return 0; 
}
