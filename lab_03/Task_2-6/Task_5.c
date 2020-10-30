#include <stdio.h>

main (){

    int a = 257;
    double result;
    double b;

    double a1 = a / 100; // 2
    double a3 = a % 10; // 7

    b = a1 / a3;
    
    result = (double) floor(b * 100) / 100;




    return 0;
}