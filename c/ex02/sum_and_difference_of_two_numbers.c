/*
Task:
Your task is to take two numbers of int data type,
two numbers of float data type as input and output their sum:
1 - Declare 4 variables: two of type int and two of type float.
2 - Read 2 lines of input from stdin (according to the sequence
given in the 'Input Format' section below) and initialize your 4 variables.
3 - Use the + and - operator to perform the following operations:
- Print the sum and difference of two int variable on a new line.
- Print the sum and difference of two float variable rounded to one
decimal place on a new line. 
*/

#include <stdio.h>

int	main(void)
{
	int		i;
	int		j;
	float	f;
	float	h;

	scanf("%d %d", &i, &j);
	scanf("%f %f", &f, &h);
	printf("%d %d\n", i + j, i - j);
	printf("%.1f %.1f\n", f + h, f - h);
	return (0);
}
