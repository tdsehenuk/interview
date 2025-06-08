#include <stdio.h>
#include <string.h>

void remove_spaces(char *str) {
    // your code here
}

int main() {
    char str[] = "h e l l o   w o r l d";
    printf("Before: '%s'\n", str);
    remove_spaces(str);
    printf("After:  '%s'\n", str);
    return 0;
}