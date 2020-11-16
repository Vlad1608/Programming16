#include <stdio.h>

int main() {
    int n = 7;
    char res;
   
    if (n > 1) {
        for (int i = 2; i < n; i++){
            if (n % i == 0){ // якщо n ділиться без остачі на i повератаєм false 
               res = 'f';
               break;
               
            } else {
               res = 't';
             
              }
        }
    }    
    
    return 0;
}