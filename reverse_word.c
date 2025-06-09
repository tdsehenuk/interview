#include <stdio.h>
#include <string.h>

void reverse_string(char *str);
void helper(char *str, int start, int end);

int main() {

    char str[] = "hello this is a test";
    printf("Before: %s", str);
    reverse_string(str);
    printf("\nAfter: %s", str);
    return 0;
}


void helper(char *str, int start, int end) {
    int temp = 0;
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

void reverse_string(char *str) {
    int length = strlen(str);
    int i;
    int start = 0;
    int end = 0;

    for(i = 0; i <= length; i++) {
        if(str[i] == ' ' || str[i] == '\0') {
            end = i -1;
            helper(str, start, end);
            start = i + 1;
        } 
    }
}


