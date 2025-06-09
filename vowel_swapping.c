#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int is_vowel(char c);
void reverse_vowels(char *str);

int main() {
    char str[] = "education";
    reverse_vowels(str);
    printf("After reversing vowels: %s\n", str);
    return 0;
}

int is_vowel(char c) {
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ) {
        return 1;
    }
    return 0;
}

void reverse_vowels(char *str) {
    int i;
    int length = strlen(str);
    int start = 0;
    int end = length-1;

    while (start < end) {
        while (start < end && !is_vowel(str[start])) start++;
        while (start < end && !is_vowel(str[end])) end--;
            if (start < end) {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            

            }
           

    }
   
}