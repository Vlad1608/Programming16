/**
 * @mainpage
 * # Загальне завдання
 * Визначити скільки у тексті слів
 * @author Mykhnevych V.V.
 * @date 24-dec-2020
 * @version 0.1
 */

/**
 * @file main.c
 * @brief Елементи головної діагоналі записати в одновимірний масив.
 * @author Mykhnevych V.V.
 * @date 24-dec-2020
 * @version 1.0
 */

#include "lib.h"

/**
 * Головна функція.
 * Послідовність дій:
 * - визначити кількість чисел у тексті
 * - заповнення масиву цифрами цифрами
 * @return успішний код повертає (0)
 */

int main() {
    char text[] = "find out how many words in the text";
    size_t count_num = get_num(text);
    int *numbers_in_text = (int *)calloc(count_num, sizeof(int));
    get_num_in_text(text, numbers_in_text); 
    free(numbers_in_text);

    return 0;
}