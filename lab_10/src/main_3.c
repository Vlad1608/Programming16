/**
 * @file main_3.c
 * @brief Знаходження потрібних пар чисел, варіативна функція
 * @author Mykhnevych V.V.
 * @date 20-dec-2020
 * @version 1.0
 */

#include <stdio.h>
#include <stdarg.h>
#include <time.h>
#include <stdlib.h>

#define SIZE 7

/**
 * Функція, яка визначає, скільки серед заданої послідовності чисел таких пар, 
 * у котрих перше число менше наступного.
 *
 * @param numbers перелік чисел
 * @param result кількість пар чисел
 * @return result
 */

int search (int numbers, ... );

/**
 * Головна функція.
 *
 * Послідовність дій:
 * - створення змінної, в яку буде записаний результат виконання функції
 * - виклик функціїї search
 * - заповнення випадковими числами
 * @return повертає(0)
 * @param result результат виконання функції search
 */

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