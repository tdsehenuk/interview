#include <stdio.h>
#include <string.h>

int is_palindrome(const char *str);


int main() {

    const char *string = "ra   ce car";
    printf("%d", is_palindrome(string));

    return 0;
}


int is_palindrome(const char *str) {

    int i = 0;
    int length = strlen(str);
    int left = 0;
    int right = length -1;

    while(left < right) {

        while (str[left] == ' ') left++;
        while (str[right] == ' ') right--;
        if(str[left] != str[right]) {
            return 0;
        }
        left++;
        right--;
    }




    return 1;
}
