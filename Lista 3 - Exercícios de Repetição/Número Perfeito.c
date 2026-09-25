#include <stdio.h>

int main (){
    int n,i,in,x,soma=0; 
    scanf("%d",&n);
    
    for (i = 0; i < n; i++)
    {
        scanf("%d",&x);

        for (in = 1; in < x; in++)
        {
            if (x%in==0)
            {
                soma+=in;
            }
            
        }
    
        if (soma==x)
        {
            printf("%d eh perfeito\n",x);
        } else {
            printf("%d nao eh perfeito\n",x);
        }
        
        soma = 0;
    }

    return 0;
}
