#include <stdio.h>

int count_vowels(const char *str);

int main() {
    const char *input = "education";
    printf("Vowel count: %d\n", count_vowels(input));
    return 0;
}

int count_vowels(const char *str) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ) {
            count++;
        }
    }
    return count;
}
