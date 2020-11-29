#include <stdio.h>
#include <string.h>

#define SIZE 15

int main() {
    char word [SIZE] = "chambo        \0";
    char space = ' ';
    char conteiner [SIZE];
    int sz_word = 0;
    
    for (int i = 0; word[i] != space; i++){ // количество букв массива word
        sz_word += 1;
    }
     strncpy (conteiner, word, sz_word); // копирование sz_word символов массива word в массив conteiner
   
    int sz_space = (SIZE - sz_word - 1) / 2; //  количество пробелов с одной стороны

    for (int j = 0; j <= sz_space; j++) { // заполнение массива пробелами
        word [j] = space;
    }
   
    int a = sz_space + sz_word;
    
    int l = 0;
    for (int m = sz_space; m < a; m++) { // заполнение массива буквами
        word [m] = conteiner [l];
        l += 1;
    }
    for (int k = a; k < SIZE - 1; k++) { // заполнение массива пробелами
        word [k] = space;
    }
    word [14] = '\0';
 
    return 0;
}