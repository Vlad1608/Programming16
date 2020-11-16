#include <stdio.h>

int main() {
    int n = 6;
    int sum = 0;
    char res;
    
    for (int i = 1; i < n; i++){
        if (n % i == 0) {
            sum += i;
            
        }
    }
    if (n == sum){
        res = 't';
    } else {
        res = 'f';
      }
    
    
    return 0;
}