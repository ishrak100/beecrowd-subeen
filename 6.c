#include <stdio.h>

void csedu(int n)
{

    for (int i = 1; i <= n; i++)
    {
        int p, q, c;
        scanf("%d%d%d", &p, &q, &c);
        long long int ans, j;
        ans = 1;
        for (j = 1; j <= q; j++)
        {
            ans = ans * p;
            ans = ans % c;
        }
        printf("Result = %lld\n", ans);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    csedu(n);
}