#include <stdio.h>
#include <stdlib.h>

int is_even_odd(int number);


int main() {

    int test = 15;
    if(is_even_odd(test) == 1) {
        printf("\nThe result is even");
    } else {
        printf("\nThe result is odd");
    }
    

    return 0;
}

int is_even_odd(int number) {
    if(number == 0) {
        return -1;
    }

     if(number % 2 == 0) {
        return 1;
     } 

     return 0;
}