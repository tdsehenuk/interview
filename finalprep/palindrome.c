#include <stdio.h>
#include <string.h>
#include <ctype.h>


int is_palindrome(char string[]) {
    int left = 0;
    int right = strlen(string) - 1;

    while(left < right) {

        while(string[left] == ' ') left++;
        while(string[right] == ' ') right--;
        if(tolower(string[left]) != tolower(string[right])) {
            return 0;
        } 
        left++;
        right--;    
    }

    return 1;
}

int main () {

    char *test1 = "palindrome";       
    char *test2 = "Rac     eC ar";

    int result_of_test1 = is_palindrome(test1);
    int result_of_test2 = is_palindrome(test2);

    printf("\n%d", result_of_test1);
    printf("\n%d", result_of_test2);
    return 0;
}