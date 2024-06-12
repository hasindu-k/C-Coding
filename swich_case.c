#include <stdio.h>

int main() {
    int position = 2;

    switch(position) {
        case 1:
            printf("Gold");
        case 2:
            printf("Silver");
        case 3:
            printf("Bronze");
        default:
            printf("No medal");
    } 
    
    printf("\n");
    
    //above code output 
	//SilverBronzeNo medal
	
	//If you forget to add the break after each case, 
	//the program will continue to execute the code in the next case statements, 
	//even if their value does not match the variable's value.
	
	
	//corrected code
	
	switch(position) {
        case 1:
            printf("Gold");
            break;
        case 2:
            printf("Silver");
            break;
        case 3:
            printf("Bronze");
            break;
        default:
            printf("No medal");
    } 

    return 0;
}
