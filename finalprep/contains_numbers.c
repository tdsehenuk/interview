#include <string.h>
#include <stdio.h>

int contains_digits(char *string);

int main() {
    
    printf("\nTesting if a string has a number in it. Please enter a string: ");
    char buffer[100]; 
    scanf("%s", buffer);
    if(contains_digits(buffer) == 1) {
        printf("\nOnly digits!");
    } else {
        printf("\nhas other chars!");
    }


    return 0;
}

int contains_digits(char *string) {
    int i = 0;
    while(string[i] != '\0') {
        if(string[i] < '0' || string[i] > '9') {
            return 0;
        }
        i++;
    }

    return 1;
}