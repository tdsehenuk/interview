#include <stdio.h>

int remove_duplicates(int *arr, int length);

int main() {
    int array[] = {1, 2, 3, 2, 4, 3, 5, 1};
    int length = sizeof(array) / sizeof(array[0]);

    int new_length = remove_duplicates(array, length);

    printf("\nArray after removing duplicates:\n");
    for (int i = 0; i < new_length; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}

// Removes duplicates and returns new length
int remove_duplicates(int *arr, int length) {
    int count[100] = {0};
    int j = 0;

    for(int i = 0; i < length; i++) {
        if(count[arr[i]] == 0 ) {
            count[arr[i]]++;
            arr[j++] = arr[i]; 
        }  
    }
    

    return j;
}

