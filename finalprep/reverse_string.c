#include <stdio.h> 
#include <stdlib.h>
#include <string.h>


void reverse_string(char string[]) {
    int length = strlen(string);
    int left = 0;
    int right = length -1;

    while (left < right) {
        char temp = string[left];
        string[left] = string[right];
        string[right] = temp;
        left++;
        right--;
    }
    string[length] = '\0';

}



int main () {
    char *s1 = "HelloMate!";
    reverse_string(s1);
    printf("\n%s", s1);
    return 0;
}