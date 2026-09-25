#include <stdio.h>
int main() {
    float cf,rf,sf,totalf;
    int i, n,total=0, quantia, c=0, r=0, s=0;
    char tipo;
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        scanf("%d ",&quantia);
        scanf("%c",&tipo);

        total+=quantia;

        if (tipo=='C')
        {
            c+=quantia;
        }else{
            if(tipo=='R'){
                r+=quantia;
            }else{
                if (tipo=='S')
                {
                    s+=quantia;
                }
                
            }
        }
        
    }
    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",c);
    printf("Total de ratos: %d\n",r);
    printf("Total de sapos: %d\n",s);
    totalf=total;
    cf = (c/totalf)*100;
    rf = (r/totalf)*100;
    sf = (s/totalf)*100;
    printf("Percentual de coelhos: %.2f %%\n",cf);
    printf("Percentual de ratos: %.2f %%\n",rf);
    printf("Percentual de sapos: %.2f %%\n",sf);

    return 0;
}
