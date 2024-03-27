#include <stdio.h>
void csedu(int n){
    for(int i=1;i<=n;i++)
    {
        int x;
        scanf("%d",&x);
        int f=1;float s=0;
        for(int j=1;j<=x;j++)
           {
            f=f*j;
            s=s+((float)j/f);
            
        }
        printf("%0.4f\n",s);
    }
    
    
    
}
int main(){
    int n;
    scanf("%d",&n);
    csedu(n);
    
    
    
    
}