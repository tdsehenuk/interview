#include <string.h>
#include <stdio.h>

#define SIZE 15

int fibonacci(int n);



int main() {
    int num = 15;
    int array[SIZE] = {0};

    for(int i = 0; i < 15; i++) {
        printf("\nIndex[%d] = %d", i, fibonacci(i));
    }
    return 0;
}

int fibonacci(int n) {
    int i = 0;
    
    if(n==0) return 0;
    if(n==1) return 1;
    if(n>=2) {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }

}