#include "main.h"
/**
 * print_triangle - function
 * Description: prints triangles
 * @size: size of the triangle
 *
 * Return: Nothing
 */
void print_triangle(int size)
{
	int row, hashtags, spaces;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (spaces = size - row; spaces >= 1; spaces--)
			{
				_putchar(' ');
			}
			for (hashtags = 1; hashtags <= row; hashtags++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
