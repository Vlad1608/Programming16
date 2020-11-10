#include <stdio.h>

int main() {
    int n = 3;
    int m = 2;
    int k = -1;
    int i = 0;
    if (n > m && m > k){ // Якщо виконується ця умова, то значення не змінні
    } else {
        if (k > m && k > n){
            i = n;
            n = k;
            k = i;
        } else if (m > n){
            i = n; 
            n = m;
            m = i;
        } 
        if (k > m){
            i = m;
            m = k;
            k = i;
        }
    } 
   // printf("%i < %i < %i", k, m, n);
    
    return 0;
}