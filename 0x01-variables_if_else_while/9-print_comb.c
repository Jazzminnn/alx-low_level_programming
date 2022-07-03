#include<stdio.h>

/**
* main- pint numbers from 0-9
*
*Return: Always 0
*/

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		if (n != '9')
		{
			putchar(n);
			putchar(',');
		}
		if (n == '9')
		{
			putchar(n);
		}
	}
putchar('\n');

return (0);

}
