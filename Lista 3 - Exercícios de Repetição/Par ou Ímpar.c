#include <stdio.h>
int main(){
  int n,i,v;
  scanf("%d",&n);
  for ( i = 0; i < n; i++)
  {
    scanf("%d",&v);
    if (v==0)
    {
        printf("NULL\n");
    }else{
        if (v%2==0){
            printf("EVEN ");
        }else {
            printf("ODD ");
    }
        if (v>0){
            printf("POSITIVE\n");
        }
        if (v<0){
            printf("NEGATIVE\n");
        }
        
  }
}  
    return 0;
}
