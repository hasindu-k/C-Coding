#include <stdio.h>

int main() {
    int x[] = {10, 20, 30, 40, 50};

    // *(x + 2): Dereferencing after pointer arithmetic
    printf("*(x + 2) = %d\n", *(x + 2)); // Accesses the third element of the array x

    // *x + 2: Dereferencing and addition
    printf("*x + 2 = %d\n", *x + 2);     // Adds 2 to the value of the first element of the array x

    // &(x + 2): Taking the address after pointer arithmetic
    printf("&(x + 2) = %p\n", &(x + 2)); // Gets the address of the third element of the array x

    return 0;
}
/* Sample Output

*(x + 2) = 30
*x + 2 = 12
&(x + 2) = 0x7ffeebf5a39c  // The actual address may vary
*/
