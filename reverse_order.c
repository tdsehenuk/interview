#include <stdio.h>
#include <string.h> 

void reverse_order(char *str);

void helper(char *str, int start, int right);
int main() {
    char str[] = "hello reverse the words";
    reverse_order(str);
    printf("%s", str);
    return 0;
}

void reverse_order(char *str) {
    int length = strlen(str);
    int i;
    int start = 0;
    int end;

    helper(str, start, length-1);



    
    for(i = 0; i <= length; i++) {
        if(str[i] == ' ' || str[i] == '\0') {
            end = i-1;
            helper(str, start, end);
            start = i + 1;
        }
    }


}

void helper(char *str, int start, int end) {
    int temp = 0;
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
// if you have space then swap left word with right word