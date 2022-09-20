/*
Task: Complete the function void update(int *a,int *b). It receives two integer pointers, int* a and int* b. Set the value of a to their sum, and b to their absolute difference. There is no return value, and no return statement is needed.
*/ 

#include <stdio.h>

void    ft_update(int *a,int *b)
{
    int sum;
    int diff;
    
    sum = *a + *b;
    diff = *a - *b;
    if (diff < 0)
        diff *= -1; 
    *a = sum;
    *b = diff;
}

int main(void)
{
    int a;
    int b;
    int *pa;
    int *pb;
    
    pa = &a;
    pb = &b;
    scanf("%d %d", &a, &b);
    ft_update(pa, pb);
    printf("%d\n%d", a, b);
    return (0);
}
