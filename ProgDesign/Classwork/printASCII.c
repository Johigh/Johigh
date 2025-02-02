#include <stdio.h>

int main(){

    char ch;
    for(ch = ' '; ch <= '~'; ch ++)
     printf("%d %c\n", ch, ch);
    
    return 0; 
}