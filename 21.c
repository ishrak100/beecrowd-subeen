#include <stdio.h>
#include<string.h>
void csedu(int n)
{
    // getchar();
    for (int i = 1; i <= n; i++)
    {   getchar();
        //char ch;
        //scanf("%c", &ch);
        char str1[1000];
        //char str2[1000];

        gets(str1);
        //strrev(str1);
        for ( int j = strlen(str1)-1 ; j >= 0; j--)
        {
           printf("%c",str1[j]);
        }
        printf("\n");
    //printf("%s\n",str1);
        
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    csedu(n);
}