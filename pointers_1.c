#include <stdio.h>

int main() {
    int age = 24;
    
    int* p = &age; //p is a pointer to an integer

    printf("%p", p); //this print memory address of the age variable

    return 0;
}

//A pointer is a variable that stores the memory address of another variable as its value.

//It is defined using the asterisk sign and is defined just like a variable:

//p is a pointer to an int variable, thats why it is declared as int*, which reads as "a pointer to an int".
