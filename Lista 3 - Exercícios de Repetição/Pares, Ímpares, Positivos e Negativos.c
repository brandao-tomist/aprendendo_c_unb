#include <stdio.h>
int main(){
    int i,v,pares=0,impares=0,positivos=0,negativos=0;
    for(i=0; i < 5; i++)
    {
        scanf("%d",&v);
        if (v%2==0)
        {
            pares++;
        }else{
            impares++;
        }
        if (v>0)
        {
            positivos++;
        }
        if (v<0)
        {
            negativos++;
        }
        
    }
    printf("%d valor(es) par(es)\n",pares);
    printf("%d valor(es) impar(es)\n",impares);
    printf("%d valor(es) positivo(s)\n",positivos);
    printf("%d valor(es) negativo(s)\n",negativos);

    return 0;
}
