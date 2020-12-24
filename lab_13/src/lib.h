/**
 * @file lib.h
 * @brief Файл для роботи з рядками
 * @author Mykhnevych V.V.
 * @date 24-dec-2020
 * @version 0.1
 */

#ifndef _LABORATORY_13_
#define _LABORATORY_13_

#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <stdlib.h>


/**
 * Функція для повернення кількості слів у тексті
 *
 * @param text текст
 * @return кількість слів
 *
 */
size_t get_num(char text[]);

/**
 * Функція, яка становлює число з тексту в числа в текстовому масиві
 *
 * @param text текст
 * @param numbers_in_text масив для чисел
 * @return
 */

void get_num_in_text(char text[], int *numbers_in_text);

/**
 * Функція, яка визначає символ
 *
 * @param symbol символ
 * @return
 */
bool symbol_is_digit(char symbol);


size_t get_count_of_words(char *string);
void str_split(char *string, char *delim, size_t word_count, char *words[word_count]);
void str_buble_sort(size_t word_count, char *words[word_count]);

void del_dublicates(size_t word_count, char *words[word_count]);
bool is_word_dublicate(size_t word_count, char *words[word_count], char *word);
void set_text_without_dublicates(char new_text[], size_t word_count, char *words[]);

void random_symbol(size_t count_of_symbols, char char_array[]);
void calclulate_frequency(size_t count_of_symbols, char char_array[], char frequency_table_chars[], float frequency_table_float[]);
void calculate_count_of_symbols(size_t count_of_symbols, char char_array[], char count_of_symbols_in_text[]);
int is_value_repeats(int value, char array_with_repeats[]);

#endif