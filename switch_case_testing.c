#include <stdio.h>

int main() {
	printf("case 1: x=4\n");
	printf("case 2: x=8\n");
	printf("case 3: x=7\n");
	printf("case 4: x=3\n");
	
	int x = 1;
	
	switch(x) {
	  case 1:
	    x = 4;
	    printf("%d\n", x);
	  case 2:
	    x = 8;
	    printf("%d\n", x);
	  case 3:
	    x = 7;
	    printf("%d\n", x);
	    break;
	  case 4:
	    x = 3;
	    printf("%d\n", x);
	}
	printf("final output %d if x=1\n\n", x);
	
	x = 2;
	switch(x) {
	  case 1:
	    x = 4;
	    printf("%d\n", x);
	  case 2:
	    x = 8;
	    printf("%d\n", x);
	  case 3:
	    x = 7;
	    printf("%d\n", x);
	    break;
	  case 4:
	    x = 3;
	    printf("%d\n", x);
	}
	printf("final output %d if x=2\n\n", x);
	
	
	x = 3;
	switch(x) {
	  case 1:
	    x = 4;
	    printf("%d\n", x);
	  case 2:
	    x = 8;
	    printf("%d\n", x);
	  case 3:
	    x = 7;
	    printf("%d\n", x);
	    break;
	  case 4:
	    x = 3;
	    printf("%d\n", x);
	}
	printf("final output %d if x=3\n\n", x);
	
	
	
	x = 4;
	switch(x) {
	  case 1:
	    x = 4;
	    printf("%d\n", x);
	  case 2:
	    x = 8;
	    printf("%d\n", x);
	  case 3:
	    x = 7;
	    printf("%d\n", x);
	    break;
	  case 4:
	    x = 3;
	    printf("%d\n", x);
	}
	printf("final output %d if x=4\n\n", x);
	
	return 0;
}
