#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int vowel_counter(const char string[]);

int main () {
    const char *test1 = "hEllo woOrld";
    printf("\n%d", vowel_counter(test1));
    return 0;
}

int vowel_counter(const char string[]) {
    int total_vowels = 0;
    int length = strlen(string) - 1;
    for(int i = 0; i < length; i++) {
        if(string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u') total_vowels++;
        else if(string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U') total_vowels++;
    }
    return total_vowels;
}