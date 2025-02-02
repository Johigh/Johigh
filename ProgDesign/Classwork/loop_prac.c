// #include <stdio.h>

// int main(){

//     int number; 
//     printf("Enter a number: ");
//     scanf("%d", &number);

//     do{    printf("Enter a number: ");
//         scanf("%d", &number);
//     }while(number < 4 || number > 12); //Will continue to ask for a number until the number inputted is within the range given in 'expression'//

    

//     return 0; 

// }


#include <stdio.h>
 
 int main(){
    int number;

    
            printf("Enter a number: ");
            scanf("%d", &number);

            // if(!(number < 4 || number > 12)) //Equivalent = if(number>=4 && number <= 12);//
                if(number>=4 && number <= 12);
            
    

    return 0; 

 }

