#include <stdio.h>
#include <string.h>

void remove_spaces(char *str) {
    
    int i;
    int j = 0;
    int length = strlen(str);

    for(i = 0; i < length; i++) {
        if(str[i] != ' ') {
            str[j++] = str[i];
        }
    }
    
    str[j] = '\0';

}

int main() {
    char str[] = "h e l l o   w o r l d";
    printf("Before: '%s'\n", str);
    remove_spaces(str);
    printf("After:  '%s'\n", str);
    return 0;
}