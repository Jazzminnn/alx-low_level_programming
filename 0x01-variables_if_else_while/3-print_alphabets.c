#include<stdio.h>
/**
* main-entry point
* Description :prints alphabets in lower and upper case
* Return: Always 0
*/

int main(void)
{
	char n, m;

	n = 'a';
	m = 'A';

	for (n = 'a'; n <= 'z'; n++)
	putchar(n);

	for (n = 'A'; m <= 'Z'; m++)
	putchar(m);
	putchar('\n');

return (0);
}
