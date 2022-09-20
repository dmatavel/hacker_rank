/*
Task

You have to print the ch character in the first line. Then print the string s in next line. In the last line print the sentence sen.
*/

#include <stdio.h>
# define MAX_LEN 50

int main() 
{
    char    ch;
    char    s[MAX_LEN];
    char    sen[MAX_LEN];
    
    scanf("%c", &ch);
    scanf("\n");
    scanf("%[^\n]%*c", s);
    scanf("\n");
    scanf("%[^\n]%*c", sen);
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);
    return (0);
}
