/*
Name: John Hightower
U#: 05320833
Description: 
Write a program to convert the last seven letters in a user input representing a phone number into their corresponding digits. 
For example, if user enters 813GROOMER, the output will be 8134766637. The correspondence between English letters and digits (2 through 9) on a standard telephone keypad are listed below. 

 getchar() function is required to read input. 
do-while loop and switch statement are required to implement the conversion. 
Strings and string library functions in <string.h> are not allowed in this program.

*/

#include <stdio.h>

int main(){
    char ch; 

    printf("Enter phone number: "); 
    
do{
    ch = getchar();
switch(ch){
    case 'A': case 'B' : case 'C':
        printf("2");
        break;
    case 'D': case 'E' : case 'F':
        printf("3");
        break;
    case 'G': case 'H' : case 'I':
        printf("4");
        break;
    case 'J': case 'K' : case 'L':
        printf("5");
        break;
    case 'M': case 'N': case 'O':
        printf("6");
        break;
    case 'P': case 'Q': case 'R': case 'S':
        printf("7");
        break;
    case 'T': case 'U': case 'V':
        printf("8");
        break;
    case 'W': case 'X': case 'Y': case 'Z':
        printf("9");
        break;
    default: 
    if(ch >= '(' && ch <= '9'){
        printf("%c", ch);
    }
        break;
}
}while(ch != '\n');


return 0;
}