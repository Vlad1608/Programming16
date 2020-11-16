#include <stdio.h>

int main() {
    double n = 4;
    double  root = 0;
    
    while (root * root <= n) {
        root += 0.01;
    }
   
    return 0;
}