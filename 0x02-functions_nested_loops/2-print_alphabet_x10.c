#include "main.h"

/**
 * print_ alphabet_ x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new lin
 * Return : 0
 */
void print_ alphabet_ x10(void)
{
	char ch;
	int i;
	i = 0;

	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_ putchar(ch);
			ch++;
		}
		_ putchar('\n');
		i++;
	}
}
