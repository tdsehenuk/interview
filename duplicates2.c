#include <string.h>
#include <stdio.h> 

void remove_duplicates(char *str);


int main () {

    char str[] = "hellomiss";
    
    remove_duplicates(str);
    printf("%s", str);
    return 0;
}


void remove_duplicates(char *str) {
    char seen[256] = {0};
    int i;
    int j = 0;
    int length = strlen(str);

    for(i = 0; i <length; i++) {
        if(seen[str[i]] == 0) {
            seen[str[i]] = 1;
            str[j++] = str[i]; 
        }
    
    }
    str[j] = '\0';

}