#include <stdio.h>

int main(){

char ch; 
 

printf("Enter message: \n");

ch = getchar();


while(ch != '\n'){
    if( ch >= 'a' && ch <= 'z'){
        ch = ch -'a' +'A'; // or ch = ch - 32; 
    }
    printf("%c", ch);
    ch = getchar();
    
}


return 0;

}