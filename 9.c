#include <stdio.h>
void csedu(int n) 
{
   for(int i=1;i<=n;i++)
   {
       int a,b;
       scanf("%d%d",&a,&b);
       for(int j=1;j<=a;j++)
       {
        for(int k=1;k<=j;k++)
        {
            printf("%d ",b);
           
       }
           printf("\n");
           
       }
       for(int j=a-1;j>=1;j--)
       {
        for(int k=1;k<=j;k++)
        {
            printf("%d ",b);
           
       }
           printf("\n");
           
       }
        printf("\n");
   } 
}

int main() {
    int n;
    scanf("%d",&n);
    csedu(n);
}
