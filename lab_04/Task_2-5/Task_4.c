#include <stdio.h>

#define SIZE 30

int main() {
    float x = -5;
    float y[SIZE];
    for (int i = 0;i < SIZE;i++, x = x + 0.25){
        
        if ((-5 < x) && (x <= -1) ){
            y[i] = -1/x;
            
        } else if (-1 < x && x <= 1 ){
            y[i] = x * x;
            
        } else  {
            y[i] = 1;
            
        }
    }    
    
    return 0;

}