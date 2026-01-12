#include <stdio.h>

int	twovar_fibonacci(int index)
{
	int a;
	int b;
	int i;
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	a = 0;
	b = 1;
	i = 2;
	while (i <= index)
	{
		b = a + b;//current
		a = b - a;//previous
		i++;
	}
	return (b);
}

int main()
{
	printf("%d\n", twovar_fibonacci(10));
}


