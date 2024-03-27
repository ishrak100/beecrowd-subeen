#include <stdio.h>

void csedu(int n)
{
    int i, a;
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        int arr[5];
        for (int j = 0; a != 0; j++)
        {
            arr[j] = a % 10;
            a = a / 10;
        }
        printf("Sum = %d\n", arr[0] + arr[4]);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    csedu(n);
}
