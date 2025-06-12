#include <stdio.h>
#include <stdlib.h>


void reverses_arary(int array[], int length);


int main() {
    int a1[] = {1, 2, 3, 4, 5};
    int length_array = sizeof(a1) / sizeof(a1[0]);

    reverses_arary(a1, length_array);

    printf("ARRAY:");
    for(int i = 0; i < length_array; i++) {
            printf("%d, ", a1[i]);
    }
    return 0;
}

void reverses_arary(int array[], int length) {
    int left = 0; 
    int right = length -1;

    while (left < right) {
        int temp = array[left];
        array[left] = array[right];
        array[right] = temp;

        left++;
        right--;
    }
}