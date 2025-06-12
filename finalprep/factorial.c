#include <stdio.h>
#include <stdlib.h>

int factorial (int num); 


int main () {

    int number = 5;
    int result = factorial(number);
    printf("%d", result);
    return 0;
}
    



int factorial (int num) {
    int result = 1;
    if(num == 0 || num == 1) {
        return 1;
    }
    
    return num * factorial(num-1);
}
    