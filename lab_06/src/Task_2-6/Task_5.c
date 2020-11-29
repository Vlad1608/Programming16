#include <stdio.h>

#define SIZE 3

int main() {
    int array [SIZE][SIZE] = {
        {5, 4, 2},
        {1, 3, 1},
        {4, 9, 7},
    };
    int buffer = array [0][0];
    for (int i = 0; i < SIZE * SIZE; i++) {
        array [0] [i] = array [0] [i + 1];
    }
    
    array [SIZE - 1] [SIZE - 1] = buffer;
    
    return 0;
}