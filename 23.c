#include <stdio.h>
int main()
{
    char x[2], y[2], z[2];
    gets(x);
    gets(y);
    int k = 0;
    int count;
    for (int i = 0; i <2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (x[i] == y[j])
            {
                z[k] = x[i];
                k++;
                count++;
            }
        }
    }
    if (count == 0)
    {
        printf("N");
    }
    else if (count == 1)
    { 
        printf("%d", z[0] - 48);
    }
    else if (count == 2)
    {
        if ((z[0] - 48) > (z[1] - 48))
        {
            printf("%d %d", z[1] - 48, z[0] - 48);
        }
        else
            printf("%d %d", z[0] - 48, z[1] - 48);
    }
}