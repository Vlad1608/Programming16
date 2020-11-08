 #include <stdio.h>


 int main(){
    
    float const PI = 3.14f;
    int r = 3;
    char command = 'l';
    char error;
    float l, s, v;
    
    if ( command == 'l'){
        l = 2 * PI * r;
        
    } else if  (command == 's'){
        s = PI * r * r;
        
    } else if (command == 'v'){
        v = (4 * PI * r * r * r) / 3;
        
    } else {
       error = 'e' ; 
        
    }
    return 0;
 }