#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: A pointer to the array of integers to be reversed.
 * @n: The number of elements in the array.
 *
 * Description: This function takes an array of integers and its length 'n',
 * and it reverses the order of elements in the array in-place.
 * For example, if the input array is [1, 2, 3, 4, 5] with n = 5, after calling
 * this function, the array will become [5, 4, 3, 2, 1].
 */
void reverse_array(int *a, int n)
{
	int m, hm;

	for (m = 0; m < n / 2; m++)
	{
		hm = a[m];
		a[m] = a[n - 1 - m];
		a[n - 1 - m] = hm;
	}
}
/**
 * main - Entry point of the program.
 *
 * Description: This program demonstrates the use of the reverse_array
 * function to reverse an array of integers and prints the reversed array.
 *
 * Return: Always returns 0 to indicate successful execution.
 */
int main(void)
{
	int arr[] = {1, 2, 3, 4, 5};
	int n = sizeof(arr) / sizeof(arr[0]);
	int m;

	reverse_array(arr, n);

	printf("Reversed Array: ");
	for (m = 0; m < n; m++)
	{
		printf("%d ", arr[m]);
	}
	printf("\n");
	return (0);
}
