#include <stdio.h>

int	find_prime(int nb, int i)
{
	if (nb <= 1)
		return (0);//0 && 1 are not prime cuz they have one factor
	if (i * i > nb)
		return (1);//no divisors found nb is prime
	if (nb % i == 0)
		return (0);//divisors found nb is not prime
	return (find_prime(nb, i+1));
}

int	ft_is_prime(int nb)
{
	return (find_prime(nb, 2));
}

int main()
{
	printf("%d\n", ft_is_prime(7));//1
}
