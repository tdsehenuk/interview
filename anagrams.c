#include <string.h>
#include <stdio.h> 

int is_anagrams(const char *str1, const char *st2);

int main() {
    const char *s1 = "listen";
    const char *s2 = "silent";

    
    printf("%d", is_anagrams(s1, s2));
    return 0;
}


int is_anagrams(const char *str1, const char *str2) {
    
    int freq1[256] = {0};
    int freq2[256] = {0};

    if(strlen(str1) != strlen(str2)) {
        return 0;
    }

    for(int i = 0; str1[i] != '\0'; i++) {
        freq1[str1[i]]++;
        freq2[str2[i]]++;
    }
    
    int j = 0;
    while(j < 256) {
        if(freq1[j] != freq2[j]) {
            return 0;
        }
        j++;
    }
    return 1;
}