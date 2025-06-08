#include <stdio.h>
#include <string.h>


void reverse_wordchar(char *str);


int main() {

    char str1[] = {"hello"};

    printf("\nThis is before reversing the woed: %s", str1);
    reverse_wordchar(str1);
    printf("\nThis is after reversing the word: %s", str1);

    return 0;
}



void reverse_wordchar (char *str){
    int length = strlen(str);
    char str2[100];
    int j = length - 1 ;
    strcpy(str2, str);
    int i = 0;
    for(i = 0; i < length; i++) {
        str[i] = str2[j--];
    }
    str[i] = '\0'; 

}