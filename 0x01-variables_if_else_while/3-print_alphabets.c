#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase and uppercase.
 *
 * Return: Always 0.
*/


int main(void)
{
	char chl, chu;

	chl = 'a';
	chu = 'A';

	while (chl <= 'z')
	{
		putchar (chl);
		chl++;
	}
	while (chu <= 'Z')
	{
		putchar (chu);
		chu++;
	}
	putchar ('\n');
	return (0);
}
