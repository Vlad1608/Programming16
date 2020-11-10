#include <stdio.h>

int main() {
   float a = 120.878;
   int b, b2;
   float result, b1;
   char error;
   
   b = (a * 1000);
   b1 = b / 1000; // 120 
   b2 = b % 1000; // 878 
   
   if (b1 == 0){
       error = 'r';
   }
   result = b2 / b1;
   result = result * 100;
   result = (int) result;
   result = (float) result / 100;
   
   
    return 0;
}