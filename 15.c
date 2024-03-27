#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n], i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int b[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    int c[2 * n];
    for (i = 0; i < 2 * n; i++)
    {
        scanf("%d", &c[i]);
    }
    int d[2 * n];
    for (i = 0; i < n; i++)
    {
        d[i] = a[i];
    }
    int j;
    for (i = n, j = 0; i < 2 * n, j < n; i++, j++)
    {
        d[i] = b[j];
    }
    int count = 0;
    for (i = 0; i < 2 * n; i++)
    {
        if (c[i] != d[i])
        {
            count++;
            break;
        }
    }
    if (count == 0)
    {
        printf("Yes");
    }
    else
        printf("No");
    return 0;
}