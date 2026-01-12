#include <stdio.h>

int	find_prime(int nb, int i)
{
	if (i * i > nb)
		return (nb);
	if (nb % i == 0)
		return (find_prime(nb + 1, 2));
	return (find_prime(nb, i + 1));
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	return (find_prime(nb, 2));
}

int main()
{
	printf("%d\n", ft_find_next_prime(6));
}
