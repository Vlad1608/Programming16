/**
 * @mainpage
 * # Загальне завдання
 * Дано масив масивів N * N цілих чисел. Елементи головної діагоналі записати в одновимірний масив, отриманий масив упорядкувати за зростанням.
 * 
 * @author Mykhnevych V.V.
 * @date 24-dec-2020
 * @version 0.1
 */

/**
 * @file main.c
 * @brief Елементи головної діагоналі записати в одновимірний масив.
 *
 * @author Mykhnevych V.V.
 * @date 24-dec-2020
 * @version 1.0
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>


/**
 * Функція, яка отримує випадкове число від мінімального значення до максимального
 *
 * @param min_value мінімальне значення
 * @param max_value максимальне значення
 * @return повертає випадкове число
 */
int get_random_num(int min_value, int max_value);

/**
 * Функція для заповнення двовимірного масиву випадковими числами
 *
 * @param x_size кількість рядків
 * @param y_size кількість стовпців
 * @param array масив для заповнення
 * @param low_limit мінімальне значення
 * @param high_limit максимальне значення
 * @return
 */
void fill_array(size_t x_size, size_t y_size, int array[x_size][y_size], int low_limit, int high_limit);

/**
 * Функція для заповнення основної діагоналі елементами
 *
 * @param side_size розмір сторони
 * @param square_array масив для використання
 * @param main_diagonal_array масив для заповнення
 * @return
 */
void fill_array__diagonal_num(size_t side_size, int square_array[side_size][side_size], int main_diagonal_array[side_size]);

/**
 * Функція для сортування масиву за зростанням
 *
 * @param array_size розмір масиву
 * @param array масив для сортування
 * @return
 */
void buble_sort(size_t array_size, int array[]);

#define SIZE 5
#define LOW_LIMIT -10
#define HIGH_LIMIT 20

/**
 * Головна функція.
 * Послідовність дій:
 * - визначити кількість елементів у квадратному масиві
 * - заповнення масиву основними діагональними елементами
 * - сортування масиву з основними діагональними елементами
 * @return успішний код повертає (0)
 */

int main() {
    int array[SIZE][SIZE];
    fill_array(SIZE, SIZE, array, LOW_LIMIT, HIGH_LIMIT);

    int diagonal_num[SIZE] = {0};
    fill_array__diagonal_num(SIZE, array, diagonal_num);

    buble_sort(SIZE, diagonal_num);
    return 0;
}

int get_random_num(int min_value, int max_value) {
    return (rand() % (max_value - 1) + min_value);
}

void fill_array(size_t x_size, size_t y_size, int array[x_size][y_size], int low_limit, int high_limit) {
    for (size_t i = 0; i < x_size; i++) {
        for (size_t j = 0; j < y_size; j++) {
            array[i][j] = get_random_num(low_limit, high_limit);
        }
    }
}

void fill_array__diagonal_num(size_t side_size, int square_array[side_size][side_size], int main_diagonal_array[side_size]) {
    for (size_t i = 0; i < side_size; i++) {
        main_diagonal_array[i] = square_array[i][i];
    }
}

void buble_sort(size_t array_size, int array[]) {
    for (size_t i = 0; i < array_size; i++) {
        for (size_t j = 0; j < array_size - 1; j++) {
            if (array[j] > array[j + 1]) {        
                array[j] += array[j + 1];
                array[j + 1] = array[j] - array[j + 1];
                array[j] -= array[j + 1];
            }
        }
    }
}