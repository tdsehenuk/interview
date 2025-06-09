#include <stdio.h>
#include <string.h>

void reverse_string(char *str) ;


int main() {

    char str1[] = "hello";
    reverse_string(str1);
    printf("%s", str1);
    return 0;
}


void reverse_string(char *str) {
    int end = strlen(str)  - 1;
    int start = 0;
    
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

