#include <stdio.h>
void csedu(int n)
{
    int temp, i, a, b, c;
    for (i = 1; i <= n; i++)
    {
        printf("Case %d: ", i);
        scanf("%d%d%d", &a, &b, &c);
        if (a > b)
        {
            temp = a;
            a = b;
            b = temp;
        }
        if (a > c)
        {
            temp = a;
            a = c;
            c = temp;
        }
        if (b > c)
        {
            temp = b;
            b = c;
            c = temp;
        }

        printf("%d %d %d\n", a, b, c);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    csedu(n);
}