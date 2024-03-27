#include <stdio.h>
void csedu(int n)
{
    for (int i = 1; i <= n; i++)
    {
        char x[10000];
        int word = 0;
        char ch;
        scanf("%c", &ch);
        fgets(x, 10000, stdin);
        for (int j = 0; x[j] != '\0'; j++)
        {
            if (x[j] == ' ')
                word++;
        }
        word++;
        printf("Count = %d\n", word);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    csedu(n);
}