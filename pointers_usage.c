#include <stdio.h>

void divide(int* x, int* y, int by) {
    *x /= by; //	*x = *x / by
    *y /= by; //    *y = *y / by 
}
int main() {
    int x = 4200;
    int y = 670;

    divide(&x, &y, 10);
    
    printf("%d %d", x, y);

    return 0;
}
/*
In case of pointer parameters, we can use any number of pointers and set their values from the function.
The function takes two pointers and another integer, then divides the two pointer values by the integer value.
This way, two values are changed by the function.
*/
