/*
Task:
Write a function int max_of_four(int a, int b, int c, int d)
which reads four arguments and returns the greatest of them. 
*/

#include <stdio.h>

int	ft_max_of_two(int a, int b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

int	ft_max_of_four(int a, int b, int c, int d)
{
	int	x;
	int	y;

	x = ft_max_of_two(a, b);
	y = ft_max_of_two(c, d);
	return (ft_max_of_two(x, y));
}

int	main(void)
{
	int	a;
	int	b;
	int	c;
	int	d;
	int	res;

	scanf("%d %d %d %d", &a, &b, &c, &d);
	res = ft_max_of_four(a, b, c, d);
	printf("%d", res);
	return (0);
}
