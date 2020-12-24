#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

float find_pos_num(int size, float *array, int pos_min_max[]);
void fill_array(float *array, float *result, int pos1, int pos2);

#define SIZE 20

int main() {
    float *array= malloc(SIZE * sizeof(float));

    srand(time(NULL));
    for (int i = 0; i < SIZE; i++) {
        *(array + i) = rand() % 10000 / (float)10000;
    }
    
    int pos_min_max[2] = {0};

    int size_of_res = find_pos_num(SIZE, array, pos_min_max);
    float *result = malloc(size_of_res * sizeof(float));
    
    fill_array(array, result, pos_min_max[0], pos_min_max[1]);

    free(result);
    free(array);

    return 0;
}


float find_pos_num(int size, float *array, int pos_min_max[]) {
    int temp = 1;
    int count = 0;
    int temp_first = 0;
    int firts = 0;
    int last = 0;
    for (int i = 0; i < SIZE; i++) {
        if (*(array + i) >= *(array + i - 1)) {
            if (temp == 1) {
                temp_first = i - 1;
            }
            temp += 1;
        } else {
            if (temp > count) {
                count = temp;
                firts = temp_first;
                last = i - 1;
            }

            temp = 1;
        }
    }
    pos_min_max[0] = firts;
    pos_min_max[1] = last; 
    return count;
}

void fill_array (float *array, float *result, int pos1, int pos2) {
    for (int i = pos1; i <= pos2; i++ ) {
        *(result + i - pos1) = *(array + i);
    }
}