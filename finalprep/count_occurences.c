#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 256

void count_occurences(const char *string, int occurences[]);

int main() {
    
    int occurences[MAX] = {0};
    const char *str = "hello";

    count_occurences(str, occurences);

    for (int i = 0; i < 256; i++) {
        if(occurences[i] > 0) {
            printf("\nIndex %d: and Occurences %d", i, occurences[i]);
        }
    }

    return 0;
}

void count_occurences(const char *string, int occurences[]) {
 
    int i = 0;
    int length = strlen(string);
    for(int i = 0; i < length ; i++) {
        occurences[string[i]]++;
    }
    
}