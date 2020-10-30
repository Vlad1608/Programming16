#include <stdio.h>

main (){
    double a = 4.9;
    double b;
    
    a *= a;
    a *= a; // a^4 
    
    a *= a;
    a *= a; 
    a *= a; // a^8 
     
    a = a * a *a;  
    a *= a; // a^6 
    
    a *= a; // a^2
    b = a * a; // b^4
    a = b * b * a; // a^10
   
   
    return 0;
}