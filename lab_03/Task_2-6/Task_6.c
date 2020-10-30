#include <stdio.h>

main(){
 int main() {
    float a = 15;
    float b = 11;
    float Suma;
    
    float n = (b - a) + 1; // количесто 
    if (a > b){ // на случай если a>b
        n = (b - a) - 1;
        n = -n; 
        }
    
     Suma = ((a + b) * n) / 2;



    return 0;
}