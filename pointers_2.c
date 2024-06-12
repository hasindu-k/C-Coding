#include <stdio.h>

int main() {
    int age = 24;
    int* p = &age; //p is a pointer to an integer

    printf("%d", *p); //this print value of age ------- /dereference

    return 0;
}

/*
The asterisk * is also used to access the value stored at a memory address. It is called the dereference operator.

Let's output the value stored at the address to which the pointer p points:
*/
