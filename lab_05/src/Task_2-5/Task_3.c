#include <stdio.h>

int main() {
    int n = 941860;
    int res1 = 0;
    int res2 = 0;
    char res;
    
    while (n / 1000) { // 941
        res1 += n % 10; 
        n = n / 10;     
    }
    while (n % 1000) { // 860
        res2 += n % 10;
        n = n / 10;
    }
    if (res1 == res2) {
        res = 't';
    } else {
        res = 'f';
    }
    
    return 0;
} 