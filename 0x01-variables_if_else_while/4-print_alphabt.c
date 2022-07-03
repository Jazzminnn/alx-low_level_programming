#include <stdio.h>

/**
* main- prints alphabets without printing q,e
*
* Return: Always 0
*/

int main(void)
{
	char n = 'a';

	for (n = 'a'; n <= 'z'; n++)
	if (n != 'q' && n != 'e')
	putchar(n);

putchar('\n');

return (0);

}
