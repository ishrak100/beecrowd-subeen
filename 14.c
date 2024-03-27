#include <stdio.h>
void csedu(int n)
{
    // getchar();
    for (int i = 1; i <= n; i++)
    {   getchar();
        //char ch;
        //scanf("%c", &ch);
        char str1[1000];
        char str2[1000];

        gets(str1);
        int j = 0, len = 0;
        while (str1[j] != '\0')
        {
            j++;
            len++;
        }
        for (int k = 0, j = len-1 ; j >= 0; j--, k++)
        {
            str2[k] = str1[j];
        }

        printf("%s\n", str2);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    csedu(n);
}