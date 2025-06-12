#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_anagram(const char *s1, const char *s2);

int main() {

    const char *string1 = "hello";
    const char *string2 = "elolh";
    
    int result = is_anagram(string1, string2);
    printf("\n%d", result);

    return 0;
}

int is_anagram(const char *s1, const char *s2){

    int count[256] = {0};
    int s1_length = strlen(s1);
    int s2_length = strlen(s2);

    if(s1_length != s2_length) {
        return 0;
    }

    for(int i = 0; i < s1_length; i++) {
        count[s1[i]]++;
        count[s2[i]]--;
    }

    for(int i = 0; i < 256; i++) {
        if(count[i] != 0) {
            return 0;   
        }
    }
    return 1;
}