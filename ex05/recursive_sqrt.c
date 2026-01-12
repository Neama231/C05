#include <stdio.h>

int	recursive_sqrt(int nb, int i)
{
	if(i * i == nb)
		return (i);
	if(i * i > nb)
		return (0);
	return(recursive_sqrt(nb, i + 1));
}

int	ft_sqrt(int nb)
{
	if(nb <= 0)
		return (0);
	return (recursive_sqrt(nb, 1));
}

int	main()
{
	printf("%d\n", ft_sqrt(4));
}

