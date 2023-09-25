#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Prints the chessboard
 * @a:Pointer to the 8x8 array representing the chessboard
 */
void print_chessboard(char (*a)[8])
{
	int row;
	int col;


	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			printf("%c", a[row][col]);
		}
		printf("\n");
	}
}

