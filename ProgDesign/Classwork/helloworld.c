#include <stdio.h>
#define RATE  21.3

int main(void){
    double hours;

    printf("enter hours: \n");
    scanf("%lf", &hours);
    double sum = 0;
    sum = hours * RATE;

    
    printf("amount is %.2lf\n", sum);
    return 0;
}


