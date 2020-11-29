#include <stdio.h>

#define SIZE 3
int main() {
    int matrix [SIZE] [SIZE] = {
        {2, 5, 0},
        {6, 1, 3},
        {3, 2, 4},
    };
    int results [SIZE] [SIZE] = {0};
    
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++){
            for (int k = 0; k < SIZE; k++) {
                results [i][j] += matrix [i][k] * matrix [k][j];
            }
        }
    }

    return 0;
}