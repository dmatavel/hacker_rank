/*
Task:
For each integer n in the interval [a,b] (given as input):
- If 1 <= n <= 9, then print the English representation of it in lowercase.
That is "one" for 1, "two" for 2, and so on.
- Else if n > 9 and it is an even number, then print "even".
- Else if n > 9 and it is an odd number, then print "odd".
*/

#include <stdio.h>
#include <unistd.h>

int	ft_isdigit(int n)
{
	return (n >= 0 && n <= 9);
}

int	ft_iseven(int n)
{
	return (n % 2 == 0);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_even_or_odd(int n)
{
	if (ft_iseven(n))
		ft_putstr("even\n");
	else
		ft_putstr("odd\n");
}

void	ft_print_number(int a)
{
	if (a == 1)
		ft_putstr("one\n");
	else if (a == 2)
		ft_putstr("two\n");
	else if (a == 3)
		ft_putstr("three\n");
	else if (a == 4)
		ft_putstr("four\n");
	else if (a == 5)
		ft_putstr("five\n");
	else if (a == 6)
		ft_putstr("six\n");
	else if (a == 7)
		ft_putstr("seven\n");
	else if (a == 8)
		ft_putstr("eight\n");
	else if (a == 9)
		ft_putstr("nine\n");
}

void	ft_nbr_to_word(int a, int b)
{
	for (; 1 <= a && a <= b; a++)
	{
		if (ft_isdigit(a))
			ft_print_number(a);
		else if (a >= 10)
		{
			for (; a <= b; a++)
				ft_even_or_odd(a);
		}
	}
}

int	main(void)
{
	int	a;
	int	b;

	scanf("%d\n%d", &a, &b);
	ft_nbr_to_word(a, b);
	return (0);
}
