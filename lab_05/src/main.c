#include <stdio.h>

int main (){

   int a = 561;
   int b = 143;
   int lcd;

   while (a != 0 && b != 0) {
       
       if (a > b){
           a = a % b;
       } else {
           b = b % a;
         } 
   }

   lcd = a + b;
   
    return 0;
}



   