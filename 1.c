#include<stdio.h>
void main()
{
 int x[] = {100, 50, 20, 10, 5, 2, 1}, i = 0, n;
    scanf("%d", &n);
    for (i = 0; i < 7; i++)
    {
        int j = n / x[i];
        printf("%d\n", j);
        n = n % x[i];
    }
 

}
