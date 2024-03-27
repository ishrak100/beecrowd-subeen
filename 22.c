#include <stdio.h>
int main()
{
    char x[1000000];
    fgets(x, 1000000, stdin);
    int j = 0, k = 0;
    char vowel[1000];
    char conso[1000];
    for (int i = 0; x[i] != '\0'; i++)
    {
        if (x[i] == 'a' || x[i] == 'e' || x[i] == 'o' || x[i] == 'i' || x[i] == 'u')
        {
            vowel[j] = x[i];
            j++;
        }
        else if (x[i] == ' ')
            continue;
        else
        {
            conso[k] = x[i];
            k++;
        }
    }
    printf("%s\n%s", vowel, conso);
}