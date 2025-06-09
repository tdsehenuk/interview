#include <stdio.h>
#include <string.h>
int isPalindrome(const char *str);


int main () {

    char *str = "r aceca  r";
    printf("is it a palindrome? %d" , isPalindrome(str));
    isPalindrome(str);
    return 0;
}


int isPalindrome(const char *str) {
    int left = 0;
    int right = strlen(str) - 1;

    while(left < right) {
        
        while(str[left] == ' ') left++;
        while(str[right] == ' ') right--;
        
        if(str[left] != str[right]) {
            return 0;
        }

        left++;
        right--;
    }

    return 1;
}