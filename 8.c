#include <stdio.h>


void csedu(int n) {
    for(int i=1;i<=n;i++){
        int a,b;
        scanf("%d%d",&a,&b);
        int ans=1,s=1;
        for(int j=1;j<=b;j++){
            ans=ans*a;
           s=s+ans;
        }
        printf("Result = %d\n",s);
            
        
    }
    
}

int main() {
    int n;
    scanf("%d",&n);
    csedu(n);
}
