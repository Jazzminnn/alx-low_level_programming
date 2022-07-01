#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main- Variable entry and evaluation
 *Description: variable entry and result
 *Return: Always 0
*/
int main(void)
{
	int n, p;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	p = n % 10;
printf("Last digit of %d is %d ", n, p);
if (n > 5)
	printf("and is greater than 5\n");
if (n == 0)
	printf("and is 0\n");
if (n < 6 && n != 0)
	printf("and is less than 6 and not 0\n");
printf(" p ");
return (0);
}
