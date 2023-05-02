#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* main - Entry point */

/** description - checks number and prints negative if number is less than zero,prints positive if number is greater than zero and prints zero if number is zero */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		pfintf("is positive\n", n);
	}
	else if (n == 0)
	{
		printf("is zero\n", n);
	}
	else
	{
		printf("is negative\n", n);
	return (0);
}
