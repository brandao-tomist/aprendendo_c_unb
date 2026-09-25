#include <stdio.h>

int main() {
    int i,v=0,maior=0,posicao=0;
    
   for (i = 0; i <100; i++)
   {
        scanf("%d",&v);
        if(v>maior){
            maior=v;
            posicao=(i+1);
        }
   }
   printf("%d\n%d\n",maior,posicao);
    return 0;
}
