#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define SIZE 3
void multiplication();

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