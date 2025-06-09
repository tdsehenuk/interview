#include <stdio.h> 
#include <string.h>

void reverse_words(char *str);
void helper(char *str, int start, int end);

int main() {

    char str[] = "this is a test";
    reverse_words(str);
    printf("%s", str);

    return 0;
}

void reverse_words(char *str) {
    int i;
    int length = strlen(str);
    int start = 0;
    int end = length;

    for(i = 0; i <= length; i++) {
        if(str[i] == ' ' || str[i] == '\0') {
            end = i - 1;
            helper(str, start, end);
            start = i + 1;
        }
    }
    
}

void helper(char *str, int start, int end) {
    int temp = 0;
    while(start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        end--;
        start++;
    }

}