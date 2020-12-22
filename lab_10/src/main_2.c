/**
 * @file main_2.c
 * @brief Множення матриці
 * @author Mykhnevych V.V.
 * @date 20-dec-2020
 * @version 1.0
 */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define SIZE 3

/**
 * функція для множення матриці
 *
 * Послідовність дій:
 * - створення масиву, в який буде записаний результат множення
 * - створення масиву, з вхідними даними
 * - заповнення масиву циклу for та функції rand
 * - процес множення матриць, за допомогою циклів for
 * @return нічого не повертає
 * @param results масив, в який буде записаний результат
 */

void multiplication();

/**
 * Головна функція.
 *
 * Послідовність дій:
 * - виклик функціїї multiplication 
 * @return повертає (0)
 * @param matrix матриця, яку ми будемо множити саму на себе
 */

int main() { 

    multiplication ();
    
    return 0;
}

void multiplication () {

    int matrix [SIZE][SIZE];
    int results [SIZE][SIZE]={0};

    srand(time(NULL));
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            matrix [i][j] = (rand() % 15);
        }
    }

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            for (int k = 0; k < SIZE; k++) {
                results [i][j] += matrix [i][k] * matrix [k][j];
            }
        }
    }
    return;
}