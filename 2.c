#include<stdio.h>
int main()
{
 int x,a,b,c;
scanf("%d",&x);
a=(x/3600);
b=((x%3600)/60);
c=((x%3600)%60);
printf("%d:%d:%d",a,b,c);

 return 0;

}
