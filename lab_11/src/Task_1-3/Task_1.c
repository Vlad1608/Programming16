#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void filling_the_array(int size, int *array); 
void filling_repeating_array(int size, int *array, int *repeats);
int size_result_array(int size, int *array, int *repeats);
void filling_res_array(int size, int *array, int *repeats, int *result_array);

#define SIZE 8

int main() {

    int *array = malloc(SIZE * sizeof(int));
    int *repeats = malloc(SIZE * sizeof(int));
    
    filling_the_array(SIZE, array);

    filling_repeating_array(SIZE, array, repeats);
    
    int resized = size_result_array(SIZE, array, repeats);
    
    int *result_array = malloc(resized * 2 * sizeof(int));
   
    filling_res_array(resized, array, repeats, result_array);
    
    free(result_array);
    free(array);
    free(repeats);
    
    return 0;
}

void filling_the_array(int size, int *array) {

    srand(time(NULL));
    for (int i = 0; i < SIZE; i++) {
        *(array + i) = rand() % 10;
    }
}

void filling_repeating_array(int size, int *array, int *repeats) {
    int count = 0;
    for (int i = 0; i < SIZE; i++){
        for (int j = 0; j < SIZE; j++) {
            if (*(array + i) == *(array + j)) {
                count++;
            }
        }
        *(repeats + i) = count;
        count = 0;
    }
}

int size_result_array(int size, int *array, int *repeats) {
    int resized = 0;
    int flag = 0;
    for (int i = 0; i < SIZE; i++) {
        if (*(repeats + i) == 1) {
            continue;
        } else {
            for (int j = 0; j < i; j++) {
                if(*(array + i) == *(array + j)) {
                    flag = 1;
                }
            }
            if (flag == 0) {
                 resized += 1;
            }
            flag = 0;
        }
    }
    return resized;
}

void filling_res_array(int size, int *array, int *repeats, int *result_array) {
    int k = 0;
    int flag = 0;
    for (int i = 0; i < SIZE; i++) {
        if (*(repeats + i) == 1) {
            continue;
        } else {
            for (int j = 0; j < i; j++) {
                if(*(array + i) == *(array + j)) {
                    flag = 1;
                }
            }
            if (flag == 0) {
                *(result_array + k) = *(array + i);
                *(result_array + k + 1) = *(repeats + i);
                k += 2;
            }
            flag = 0;
        }
    }    
}