#include<stdio.h>
#include<time.h>
#include<stdlib.h>

/**
*main - determines whether a value is negative, positive or zero
*
*Return: Always return 0 (success)
*
*/
int main(void)
{
	int n;

	ssrand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
