#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Reverses the elements of an integer array.
 * @a: A pointer to the integer array.
 * @n: The number of elements in the array.
 *
 * Description: This function takes an integer array 'a' and its length 'n' and
 * reverses the order of elements in the array in-place.
 * the elements from the start and end positions
 * of the array until the entire array is reversed.
 */
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;
	int temp;

	if (a == NULL || n <= 0)
	{
		return;
	}
	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}

/**
 * main - Entry point of the program.
 *
 * Description: This program demonstrates the use of the reverse_array
 * function to reverse an integer array and prints both the original and
 * reversed arrays.
 *
 * Return: Always returns 0 to indicate successful execution.
 */
int main(void)
{
	int arr[] = {1, 2, 3, 4, 5};
	int size = sizeof(arr) / sizeof(arr[0]);
	int i;

	printf("Original Array: ");
	for (i = 0; i < size; i++)
	{
	printf("%d ", arr[i]);
	}
	printf("\n");
	reverse_array(arr, size);
	printf("Reversed Array: ");
	for (i = 0; i < size; i++)
	{
	printf("%d ", arr[i]);
	}
	printf("\n");
	return (0);
}

