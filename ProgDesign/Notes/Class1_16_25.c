/*
- C -> provides access to machine level concepts that other languages try to hide. (bytes, pointers)
- Core uses: Comp org, Data structures, operating systems, secure coding.
- Electives: Comp Net, Cyber, Image Process 

- Versions of C: K & R 
    - Ansi /ISO
    - ISO 
    - C89
    - Student Cluster
    - New Ansi/ISO
    - 
- C Based Languages - C++ (super set of C), Objective C, Java, C# 


Chapter 2: 
- for files in C = filename.c 
- for files in C++ = filename.cpp

    General form of Simple Program
        - directives 
            int main(void)
            {
                statements
            }
- .h = header files
- .c = source file
- 'printf' function simply prints words within parantheses = printf("hellworld!");
- {} used for functions, loops, conditions
- Compiling and Linking 
    - when compiling use '-Wall' in the terminal presents all possible issues with the code. 
    - main function = mandatory and special, called automatically when program executed. -> value 0 indicates normal termination
    - if not return compiler returns "warning; control reaches end of non - void function" 

    - '\n' = Enter or nextline. 
    - '\t' = tab or space. 

- Comments - /* or // (this option is safer - prevents code being consumed/terminated by accidental commentation)
- Identifiers - name for vairables, functions, macros, or other entities. 
    - times10 , get_next_char, _done
    - best to avoid beginning with underscore
    - Also can use ' symbolTable, nextAddress, currentPage
    - 'lf' = long float or you can use '%lf' 
    - when printing long float put '.#' for amount of decimal places that you want i.e. -> printf("amount is %.2lf\n", rate * hours);
- Reading Input 
    - scanf - library counterpart to printf
    - requires format string
    - when using scanf to address to a user input must use '&' as such ->  
                printf("enter hours: \n");
                scanf("%lf", &hours);
    - scanf IGNORES white space characters 

- Macro Definition = to define a constant that will exist within a program 
    - i.e. - #define QUARTER 25 
    - 






*/