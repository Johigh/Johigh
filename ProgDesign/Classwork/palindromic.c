#include <stdio.h>

int main(){
    int number;
    int count = 0;

    printf("First 50 palindromic numbers: \n");
    for(number = 1; count < 50; number ++){
        int n = number, reverse = 0;
        //calculate reverse//
        while(n > 0){
            int remainder = n % 10; 
            reverse = reverse * 10 + remainder; 
            n = n/10; 
        }
        //check if reverse is the same as number//
        if(reverse == number){
            printf("%d", number);
            count ++;
        }
 
    }
    
    return 0; 

}