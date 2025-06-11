#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int sum(int a, int b) {
    return a +b;
}

int product(int a, int b) {
    return a*b;
}

void should_not_be_changed(int (*operation) (int, int)) {
   srand(time(NULL));
    int a = rand() % 100 + 1 ; 
    int b = rand() % 100 + 1 ; 

    printf("The result of the operation between %d and %d is %d\n",
        a,b, operation(a,b));



}

int main(int argc, char *argv[]) {
    should_not_be_changed(&product);
 
    return 0;
}

int (*ops[2])(int, int) = {sum, product};