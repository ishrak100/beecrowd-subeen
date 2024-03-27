#include <stdio.h>
void csedu(int n)
{   getchar();
    for (int i = 1; i <= n; i++)
    {
        //char ch;
        //scanf("%c", &ch);
        char x[1000];
        gets(x);
        int vowel = 0;
        for (int j = 0; x[j] != '\0'; j++)
        {
            if (x[j] == 'a' || x[j] == 'e' || x[j] == 'i' || x[j] == 'o' || x[j] == 'u'      
            || x[j] == 'A' || x[j] == 'E' || x[j] == 'I' || x[j] == 'O' || x[j] == 'U')
                vowel++;
        }
        printf("Number of vowels = %d\n", vowel);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    csedu(n);
}