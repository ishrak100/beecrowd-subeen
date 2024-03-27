#include <stdio.h>
void csedu(int n){
    int i,j,x;
    for(i=1;i<=n;i++){
       printf("Case %d: ",i);
        scanf("%d",&x);
        for(j=1;j<=x;j++){
            if(x%j==0)
            printf("%d ",j);
            
        }
        printf("\n");
    }

}
int main(){
  int n;
    scanf("%d",&n);
    csedu(n);
    
}