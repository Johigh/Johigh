#include <stdio.h>
#define FREEZING_PT 32.0 
#define SCALE_FACTOR (5.0/9.0)

int main (void){
    double fahrenheit, celsius; 
    printf("Enter Fahrenheit temperature: ");
    scanf("%lf", &fahrenheit); 

    celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;

    printf("Celsius Equivalent: %.1lf\n", celsius);

    return 0;
}