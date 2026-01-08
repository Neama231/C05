#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int n;
	n = 1;
	while (power > 0)
	{
		n *= nb;
		power--;
	}
	return (n);
}

int main()
{
	printf("%d\n", ft_iterative_power(2, 3));
}
