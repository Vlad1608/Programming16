#include <stdio.h>
#include <string.h>

int main() {
   
    char *s = "enter your words with a space";
    int Count_word = 1;

    for (int i = 0; i < strlen(s); i++) {
        if (s[i]== ' ' && s[i + 1] != ' ') {
            Count_word++;
            
        } 
    } 
    
    return 0;
}