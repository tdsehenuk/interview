#include <stdio.h>

int count_words(const char *str);

int main() {
    const char *test = "hello world test";
    printf("Word count: %d\n", count_words(test));
    return 0;
}

int count_words(const char *str) {

    int wordcount = 0;
    int inword = 0;

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] != ' ') {
            inword = 1;
        } else if (inword == 1) {
            inword = 0;
            wordcount++;
        }
    }

    if(inword == 1) {
        wordcount++;
    }
    return wordcount;
}