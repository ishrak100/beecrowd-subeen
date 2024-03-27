#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    // used for test cases
    int i;
    for (i = 0; i < n; i++)
    {
        char str[130];
        char str2[130];
        scanf("%s", str);
        scanf("%s", str2);
        int len1 = strlen(str);
        int len2 = strlen(str2);
        int j = 0;
        // we used this for checking mathced or not
        while (j <= len1 - len2)
        {
            if (strncmp(str + j, str2, len2) == 0)
            {
                printf("%d\n", j);
                break;
            }
            j++;
        }
    }

    return 0;
}