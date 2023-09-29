#ifndef PA8_H
#define PA8_H

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct occurences
{
	int num_occurences;
	double frequency;
} Occurences;

char *my_str_n_cat(char *des_ptr, char *src_ptr, int n);
int binary_search(int integers[], int n, int target);
void bubble_sort(char strings[], int num);
int is_palindrome(char* str, int len);
int sum_primes(unsigned int n);
int maximum_occurences(char* str, Occurences occur[11], int* max, char* character);
void max_consecutive_integers(signed int integers[3][4], int rows, int cols);

#endif