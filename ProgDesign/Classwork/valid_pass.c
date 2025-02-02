#include <stdio.h>

int main()
{
    char ch;
    int is_valid = 1; // flag variable//
    int count = 0;    // keeping track of characters//
    printf("Enter Password:");

    ch = getchar(); // reads one character//
    printf("%c", ch);

    while (ch != '\n')
    {
       //if(not upper or lower or digit)
       if( !(ch >= 'A'  && ch <= 'Z') || (ch>= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'));
        is_valid = 0; 
        count ++;
        ch = getchar();
        printf("%c", ch); 
    }

    if(count < 8 ) is_valid = 0; 

    if (is_valid)
        printf("\nValid\n");
    else
        printf("\nInvalid\n");

    return 0;
}