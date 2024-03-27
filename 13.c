#include <stdio.h>

void csedu(int n)
{
    int x, a, b;
    for (int i; i < n; i++)
    {
        scanf("%d", &x);
        int a = sqrt(x);
        double b = sqrt(x);
        if (b - a == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    csedu(n);
}