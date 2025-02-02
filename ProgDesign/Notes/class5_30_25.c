/*
Chapter 7:
- VI: "yy" and "p" for copy and paste. 
     - make sure NOT in insert mode, by pressing ESC key. 
     - In regular mode, use "dd" to delete a line
     - "u" to undo 
- Integer Types 
     - Signed & Unsigned - default, int variables are signed in C - leftmost bit = sign. 
     - To declare that variable has no sign 'unsigned_bit' for compiler to understand
     - short int = -32,768 - 32,767 ; int = -2,4........ to 2,4....... ; long int 
     - Integer Overflow = during operation on ints, behavior is undefined. 
          - i.e. - long i;   // i is long type// 
                    int j = 100000;    // j is not long type//
                    i = j * j; /overflow may occur  - // * has precedence over =, therefore the return type is 'int' - does not convert to 'long'// 
          - Can use Casting, to fix this ; 'i = (long) j * j;
- Floating Types 
     - 3 types: float = single precision (32 bit), double = double precision (64 bit), long double = extended precision 
     - default = floating constants are stored as double- precision numbers. 
     - for most practical purposes, double is both necessary and sufficient 
     - "scanf" need to specify - float = %f ; double = %lf
- Type Definitions 
     - #define - can be used to define 'BOOL types'
     - typedef library creates names for types that can vary, often end with '_t' 
     - i.e. - 'typedef long int ptrdiff_t'
- Characters
     - ASCII code - American Standard Code Info Interchange 
          - English letters (upper case and lower case) 
          - symbols & numbers 
          - 'm' - 5 = 105 - 5 
          - char ch1 = 'A';
     - C treats characters as 'small ints' 
     - %c conversion specification allows scanf and printf to read and write characters. 
          - scanf("%c", &ch); // reads one character// 
          - printf("%c", ch); // write one character// 
          - scanf doesn't skip white space characters when reading. - char ch = ' '; // ch is 32//
     -Operations on characters 
          - if( ch >= 'a' && ch <= 'z') //converts lowercase letter to uppercase// 
                    ch = ch - 'a' + 'A'; 
- Using getchar 
     - loop we use to skip the rest of an input line: 
          - do{
               ch = getchar();} while(ch != '\n';)
     - skip characters as well as loops that search for characters. In slides 
- Exercise 1 
     - 

*/