/*
Chapter 4: Expressions 

- In C assignment = operator, just like +. 
- Can be chained together -> " i = j = k = 0;"
- = operater is 'right associative' 
    - equivalent to " i = (j = (k = 0));"
-
Lvalues 
- object stored in computer memory - variables, not a constant or the result of computation. i.e. 10 or 2 * i
    - 12 = i; 
    - i + j = 0;
Increment or Decrement Operators 
    - (++) & (--)

    - Postfix = 'total = count++;' // assign 5 to total and 6 to count ('count' currently equals 5)
    - Prefix = 'total = ++count;'// 
    - i.e. 
        - i =1; 
        - j = 2;
        - k = ++1 

    Exericse: 
        'i = 8;
        'j = 4;
        'i *= j++;  // i = i * j  and j ++; 
        'printf(" %d %d", i, j);

        //output: 32 5//
    
Chapter 5 Selection Statements
    - switch 
        - fall through 
        - default and break
        - i.e. 
            switch(grade) {
                case 1: printf("Excellent");
                    break;
                case 2: printf("Good");
                    break;
                    .
            .
            ..
            .
            .
                default: printf("Illegal Grade");
                    break;
            }
///////////////


            switch(grade){
                case 1:
                case 2:
                case 3:
                case 4: printf("passing");
                    break;
                deafult: printf("fail");   ///Default is optional/// 
                    break;
            
            }
 //////////////

    Exercise: 
        switch(grade)
            - if no break between cases, will print each statement after given case as well as case selected.            

    - if/else
        - non zero and zero values for condition 

        "if(expression) statement"
        - if value is nonzero in a if expression, the statement is executed. 
            - 0 = ONLY THING THAT IS FALSE 
            - 1 = TRUE and any NONZERO 
        
    - logical operators: && , || , !
    - relational : < , > , <=
        - produce 0 = false, or 1 = true when used in expression
        - equality has lower precedence 

    Exercise:
        - 'i < j == j < k' ->>> 0 == 0 = True = 1 - A 


    - arithmetic: +, - , * , / 

    - Boolean Values - type available in C99 in 'stdbool.h'
        - if (flag != 0)  OR if (flag) 
            - Executes statement if 'flag' has a value other than 0 
        
        - if(!flag) = false ==== 'flag ==0'
        - if (flag) = true === if (flag != 0)

    - Exercise Part 2 - Dates 
*/