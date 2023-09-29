#include "pa8.h"

char *my_str_n_cat(char* des_ptr, char* src_ptr, int n)
{
	for (int i = 0; i <= n; i++)
	{
		des_ptr++;
	}
	for (int i = 0; i <= n; i++) {
		if (*src_ptr == '\0') {
			break;
		}
		else {
			*des_ptr = *src_ptr;
			des_ptr++;
			src_ptr++;
		}
	}
	return des_ptr;
}

int binary_search(int integers[], int n, int target)
{
	int left_i = 0, right_i = n - 1, mid_i = -1, found = 0,
		target_index = -1;

	while (!found && left_i <= right_i)
	{
		mid_i = (left_i + right_i) / 2;
		if (integers[mid_i] == target)
		{
			found = 1;
			target_index = mid_i;
		}
		else if (target < integers[mid_i])
		{
			right_i = mid_i - 1;
		}
		else if (target > integers[mid_i])
		{
			left_i = mid_i + 1;
		}
	}
	return target_index;
}

void bubble_sort(char *strings[], int num)
{
	int U = num, C = 1;

	while (U > 1)
	{
		C = 1;
		while (C < U)
		{
			if (*strings[C] < *strings[C - 1])
			{
				char* temp_array = strings[C - 1];
				strings[C - 1] = strings[C];
				strings[C] = temp_array;
			}
			C += 1;
		}
		U -= 1;
	}
}

int is_palindrome(char* str, int len)
{
	int a, b = 0;
	char newstr[50];
	for (a = 0; str[a] != 0; a++)
	{
		if (str[a] != ' ')
		{
			newstr[b] = str[a];
			b += 1;
		}
		newstr[b] = 0;
	}

	int i = (strlen(newstr) - len);

	if (len == 0)
	{
		return 1;
	}
	if (str[i] != newstr[len - 1])
	{
		return 0;
	}
	return is_palindrome(newstr, len - 1);
}

int sum_primes(unsigned int n)
{
	int result = 0, is_prime = 1;
	if (n == 2)
	{
		return n;
	}
	for (int i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			is_prime = 0;
		}
	}
	if (is_prime == 0)
	{
		result = n;
	}
	return sum_primes(n - 1) + result;
}

int maximum_occurences(char* str, Occurences occur[11], int* max, char* character)
{
	int counter = 0;

	for (int i = 0; i < 11; i++)
	{
		int index = (int)str[i];
		occur[index].num_occurences += 1;
		counter += 1;
	}

	for (int i = 0; i < 11; i++)
	{
		int index = (int)str[i];
		occur[i].frequency = (double) occur[index].num_occurences / counter;
	}
	
	*max = 0;
	*character = 't';
	for (int i = 0; i < 11; i++)
	{
		int index = (int)str[i];
		if (occur[index].num_occurences > *max)
		{
			*max = occur[index].num_occurences;
			*character = (char)index;
		}
	}
}
