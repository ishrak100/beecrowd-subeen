#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int n;
        scanf("%d", &n);
        int x[n - 1];
        for (int j = 0; j < n - 1; j++)
        {
            scanf("%d", &x[j]);
        }
        for (int k = 1; k <= n; k++)
        {
            int count = 0;
            for (int j = 0; j < n - 1; j++)
            {
                if (k == x[j])
                {
                    count++;
                    continue;
                }
            }
            if(count==0)
            printf("%d\n",k);
        }
    }
    return 0;
}