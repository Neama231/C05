#include <stdio.h>

int	ft_iterative_fibonacci(int index)
{
	int a;
	int b;
	int next;
	int counter;
	if(index < 0)
		return (-1);
	if(index < 2)
		return (index);
	a = 0;
	b = 1;
	counter = 2;
	while (counter <= index)
	{
		next = a + b;//next_value
		a = b;//previous_value
		b = next;//current_value
		counter++;
	}
	return (b);
}

int main()
{
	printf("%d\n", ft_iterative_fibonacci(10));
}
