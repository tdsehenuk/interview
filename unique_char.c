#include <string.h>
#include <stdio.h>

char first_unique_char(const char *str);

int main() {


    const char *str = "hhello";
    printf("First unique char: %c", first_unique_char(str));
    return 0;
}

char first_unique_char(const char *str) {
    if(str[0] == '\0') {
        return '\0';
    }

    int seen[256] = {0};
    int i =0;
    for(i = 0; str[i] != '\0'; i++ ) {
        seen[str[i]]++;
    }

    for(i = 0; str[i] != '\0'; i++ ) {
       if(seen[str[i]] == 1) {
        return str[i];
       }
    }
    
    return '\0';
}
