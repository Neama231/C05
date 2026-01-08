#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int n;
	n = 1;
	while(nb > 0)
	{
		n *= nb;
		nb--;
	}
	return (n);
}

int main()
{
	printf("%d\n", ft_iterative_factorial(3));
}
		
