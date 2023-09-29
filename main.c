#include "pa8.h"

int main(void)
{
	printf("==my_str_n_cat==\n");
	char string[100] = "hello12";
	my_str_n_cat(string, "goodbye", 6);
	puts(string);

	printf("\n\n==binary_search==\n");
	int integers[10] = { 0, 5, 3, 9, 7, 3, 15, 20, 2 };
	int target_index = 0;
	target_index = binary_search(integers, 10, 5);
	printf("target_index: %d", target_index);

	printf("\n\n==bubble_sort==\n");
	char string1[10] = "hello";
	char string2[10] = "bye";
	char string3[10] = "friend";
	int* array[3] = { string1, string2, string3 };	
	bubble_sort(array, 3);
	for (int i = 0; i < 3; i++) {
		puts(array[i]);
	}

	printf("\n\n==is_palindrome==\n");
	int result = -1;
	int length = strlen("race car");
	result = is_palindrome("race car", length);
	if (result == 1)
	{
		printf("%s is a palindrome!", "race car");
	}
	else if (result == 0)
	{
		printf("%s is not a palindrome.", "race car");
	}

	printf("\n\n==sum_primes==\n");
	int n = 20;
	printf("The sum of primes up to %d: %d", n, sum_primes(n));

	printf("\n\n==maximum_occurences==\n");
	Occurences occur[11];
	int *max = 0;
	char *character = 't';

	for (int i = 0; i < 11; i++)
	{
		occur[i].num_occurences = 0;
		occur[i].frequency = 0.0;
	}

	maximum_occurences("test string", occur, &max, &character);
	printf("The maximum occurences of %c were: %d", character, max);

}