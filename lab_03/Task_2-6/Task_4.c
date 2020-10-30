#include <stdio.h>

main (){
    int a = 3412;
    int p = 6;
    int result;

    int a1 = a / 1000; // 3

    int a2 = a / 100; // 34
        a2 = a2 % 10; // 4

    int a3 = a % 100; // 12
        a3 = a3 / 10; // 1

    int a4 = a % 10; // 2
     
    result = (a1 * p * p * p ) + (a2 * p * p) + (a3 * p) + a4;



    return 0;
}