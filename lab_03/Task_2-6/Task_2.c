#include <stdio.h>

main (){
    int a = 154;
    int result;

    int b1 = a % 10; // 4

    int b2 = a / 10; // 15 
        b2 = b2 % 10; // 5

    int b3 = a / 100; // 1

    result = b1 * 100 + b2 * 10 + b3;


return 0;
}