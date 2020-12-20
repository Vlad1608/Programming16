/**
 * @mainpage
 * # Загальне завдання
 * 1. **Розробити** функцию, що буде рухувати квадратний корінь з числа, без допомоги зовнішних бібліотек
 * 2. **Розробити** функцію, що буде премножати матрицю саму на себе
 * 3. **Розробити** варіаивну функцію, що буде рахувати кількість пар чисел, в яких наступне число меньше попереднього
 *
 * @author Mykhnevych V.V.
 * @date 14-dec-2020
 * @version 1.0
 */

/**
 * @file main_1.c
 * @brief Квадратний корінь числа
 * @author Mykhnevych V.V.
 * @date 20-dec-2020
 * @version 1.0
 */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * функція для розрахунку квадратного кореня з числа
 * @return root          
 * @param root добутий корінь із заданого числа
 */

double result_root(double root, int n);

/**
 * Головна функція.
 *
 * Послідовність дій:
 * - створення змінної n, в яку буде записане число
 * - створення змінної root, в яку буде записаний результат виконання функіїї
 * - виклик функціїї result_root для згенерованого числа змінної n
 * @return повертає(0)
 * @param n число, я якого отримаємо корінь
 * @param root результат виклику функції result_root
 */

int main() {
    int  n;
    double  root = 0;

    srand(time(NULL));
        n = (rand()% 225); 
    
    result_root(root, n);
    
    return 0;
}

double result_root(double root, int n) {

     while (root * root <= n) {
        root += 0.01;
    }

    return root;
}