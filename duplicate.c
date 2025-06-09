#include <stdio.h>
#include <string.h>

void remove_duplicates(char *str);

int main() {

    char s[] = "helloworld";
    printf("\nBefore: %s", s);
    remove_duplicates(s);
    printf("\nAfter: %s", s);
}


void remove_duplicates(char *str) {
    char seen[256] = {0};
    int length = strlen(str);
    int i;
    int j = 0;

    for(i = 0; i < length; i++) {
        if (seen[str[i]] == 0) {
            seen[str[i]] = 1;
            str[j++] = str[i]; 
        }
    }
    str[j] = '\0';
   

}
