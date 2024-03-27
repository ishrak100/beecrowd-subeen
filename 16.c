#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n], max, i;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    max = a[0];
    for (i = 1; i < n; i++)
    {
        if (max < a[i])

            max = a[i];
    }
    int count=0 , j = max;
    for (j = max; count<n; j++)
    {
        count = 0;
        for (i = 0; i < n; i++)
        {
            if (j % a[i] == 0)
            {
                count++;
                continue;
            }
            else
                break;
        }
    }
    printf("%d", j-1);
    return 0;
}