#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

int location_of_nonrepeating(const char *s);

int main() {
    const char *s = "hheeloo";
    printf("the first non repeating char is at index: %d\n",location_of_nonrepeating(s) );
    return 0;
}

int location_of_nonrepeating(const char *s) {
    int s_length = strlen(s);
    int i = 0;

    for(i = 0; i < s_length; i++) {
        int repeated = 0;
       for(int j = 0; j < s_length; j++) {
            if(i != j   &&    s[i] == s[j]) {
                repeated = 1;
                break;
            } 
        }


         if(!repeated) {
            return i;
        }   
    }

    return -1;
}