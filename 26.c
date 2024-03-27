#include <stdio.h>
void main()
{
    char x[1000];
    gets(x);
    char ch;
    scanf("%c", &ch);
    int count = 0;
    for (int i = 0; x[i] != '\0'; i++)
    {
        if (x[i] == ch)
        {
            count++;
        }
    }
    printf("%d", count);
}