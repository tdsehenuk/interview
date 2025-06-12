#include <stdio.h>
#include <stdbool.h>

int is_prime(int n);

int main() {
    int num = 4;
    int result = is_prime(num);
    printf("\n %d", result);
    return 0;
}
int is_prime(int n){

    if(n == 1) {
        return 1;
    } else if (n == 2) {
        return 1;
    } else if (n == 3) {
        return 1;
    }

    if(n % 2 == 0) {
        return 0;
    } else if(n % 3 == 0) {
        return 0;
    }

    return 0;
}