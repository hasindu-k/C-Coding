#include <stdio.h>

//define the function here
void baggage() {
    int weight;
    scanf("%d",&weight);

    if(weight>23) {
        printf("%d", (weight-23)*12 );
    }
}

int main() {
    baggage();

    return 0;
}

//expected
/*
void baggage() {
    
    int total;
    if(weight <= 23) {
        total = 0;
    }
    else {
        total = (weight-23)*12;
    }
    printf("Total: $%d", total);
}
*/
