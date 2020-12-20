#include <stdio.h>
#include <stdarg.h>
#include <time.h>
#include <stdlib.h>

#define SIZE 7

int search (int numbers, ... );

int main() {
	srand(time(NULL));
    int result = search (SIZE, rand() % 15, rand() % 15, rand() % 15, rand() % 15, rand() % 15, rand() % 15, rand() % 15);
    return 0;
}

int search (int numbers, ... ) {
	int result = 0;
	va_list factor;
	va_start(factor, numbers);
	int num1 = va_arg(factor, int);
	for (int i = 0; i < SIZE; i++){
		int num2 = va_arg(factor, int);
		if (num1 < num2) {
		    result ++;
		}
		num1 = num2;
	}    
	va_end(factor);

    	return result;
}