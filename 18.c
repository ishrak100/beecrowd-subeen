#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int n;
        scanf("%d", &n);
        int x[n];
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &x[j]);
        }
        printf("%d ", x[0]);
        for (int j = 2; j < n; j += 2)
        {

            printf("%d ", x[j]);
        }
    }
    return 0;
}
