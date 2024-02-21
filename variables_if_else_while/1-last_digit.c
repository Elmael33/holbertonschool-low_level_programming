#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * Program pour trouver le debut ou la fin
 *
 * Return
 */
int main(void) {

	int n

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n");
	}
	else if (n < 6 Ã  = 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n");
	}
	else 
	{
		printf("Last digit of %d is %d and is 0\n");
	}
	return (0);
}
