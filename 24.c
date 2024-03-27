#include <stdio.h>
int main()
{
    char x[50];
    gets(x);
    for (int i = 0; x[i] != '\0'; i++)
    {
        if (x[i] == 'L')
        {
            x[i] = x[i - 1];
        }
        if (x[i] == 'R')
        {
            x[i] = x[i + 1];
        }
    }
    puts(x);
}