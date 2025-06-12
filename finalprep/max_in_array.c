#include <stdio.h>


int find_max(int array[], int length);


int main() {
    int a1[] = {1, 5, 8, 4, 99, 2};
    int length_of_array = sizeof(a1)/sizeof(a1[0]);
    int result = find_max(a1, length_of_array);
    printf("\nThe max in the array is %d", result);

    return 0;
}


int find_max(int array[], int length) {
    int max = 0;

    for (int i = 0; i < length; i++) {
        if(max < array[i]) {
            max = array[i];
        }
    }

    return max;
}