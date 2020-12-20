#include <stdio.h>
#include <time.h>
#include <stdlib.h>

double result_root(double root, int n);

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