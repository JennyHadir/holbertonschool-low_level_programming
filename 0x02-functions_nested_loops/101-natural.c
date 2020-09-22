#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0
*/
int main(void)
{
	int i, n, m, s;

	n = 1024 / 3;
	m = 1024 / 5;
	s = 0;
	for (i = 0; i <= n; i++)
	{
		s = s + (i * 3);
	}
	for (i = 0; i <= m; i++)
	{
		if (!(i % 3 == 0))
		{
			s = s + (i * 5);
		}
	}
	printf("%d\n", s);
	return (0);

}
