/*
Chapter 6: Loops
- >while statement = easiest way to set up loop 
     - "while ( expression ) statement" - form of while loop 
    - expression is controlling; statment is loop body
    - i.e. ' while (i < n) //controlling expression//
            i = i * 2;     // loop body// 

- > Do statement - 'do statement while ( expression) {}; 
    - when do is exectued loop body is executed first

-> For statement - ideal for loops that have a "counting" variable, but it's versatile
 - 'expr1' = initializes , 'expr2' = controls loop termination(continues to execute as long as nonzero), 'expr3' = 
 - i.e. - 'for(i = 10; i > 0; i--)
                printf("i is %d\n", i); 
- Exercise - ' int n; 
                for(n = 9; n != 0; n--) //this decrement goes 2nd//
                    printf("%d", n--); //this decrement goes 1st//
            
            OUTPUT = C) INFINITE LOOP - due to the fact that it is decrementing by 2 and never hits zero, therefore it will continue to decrement. 
- In C99 - a for loop statement can begin with a declaration as so - for(int i = 0; i > 0; i++) 
    - normally, the 'int i' would need to be declared prior, as in C89

->Break statement - exits out of a loop, depending on the placement 
-> Continue statement - will skip to next part of the loop. 
    - i.e. - ' n = 0; 
                sum = 0;
                while (n < 10) {
                    scanf("%d", &i);
                    if ( i == 0)
                        continue; 
                    sum += i;
                    n ++; 
                    //continue jumps to here//
                    }

             n = 0; 
                sum = 0;
                while (n < 10) {
                    scanf("%d", &i);
                    if ( i == 0)
                        break; 
                    sum += i;
                    n ++; 
                    }
                    //break jumps to here//

- Exercise : OUTPUT = C) 2 
- Exercise : OUTPUT = A) 0 

-> Null = primarily good for writing loops when body is empty
    - accidentally putting semicolon at end of loop will create a null statement 

- Exercise: D) Infinite Loop - Semicolon makes loop NULL - continues to compare just 3 and never decrements
- Exercise: C) 0 - semicolon makes it NULL - continues to compare/decrement. Exits loop, then goes to print statment, that is NOT part of loop. 
*/