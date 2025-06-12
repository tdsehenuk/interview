#include <string.h>
#include <stdio.h>

void fibonacci(int array[], int length);


int main() {
    int fib[15] = {0};
    fib[1] = 1;
    int length = sizeof(fib) / sizeof(fib[0]);
    fibonacci(fib, length);

     for (int i = 0; i < length; i++) {
        printf("%d, ", fib[i]);
    }
    return 0;
}

void fibonacci(int array[], int length) {
    for (int i = 2; i < length; i++) {
        array[i] = array[i-1] + array[i-2];
    }
}