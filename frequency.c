#include <stdio.h>
#include <string.h>

void frequency(const char *str);

int main() {

    const char *str = "helloworld";
    frequency(str);

    return 0;
}

void frequency(const char *str) {
    int seen[256] = {0};

    for(int i = 0; str[i] != '\0'; i++) {
        seen[str[i]]++;
    }
    

    for(int i = 0; i < 256; i++) {
        if(seen[i] > 0) {
            printf("%c: %d\n ", i, seen[i]);
        }
    }
}
