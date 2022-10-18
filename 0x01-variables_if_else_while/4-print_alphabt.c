#include <stdio>
/**
 * main - prints the alphabet in lower
 * Return:Away 0
 */
int main(void)
{
	char la

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'e' && la != 'q')
			pitchar(la);
	}

	putchar('\n');

	return (0);
}
