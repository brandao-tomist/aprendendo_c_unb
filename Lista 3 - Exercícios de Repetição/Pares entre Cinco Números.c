#include <stdio.h>
int main(){
    int i,v,pares=0;
    for(i=0; i < 5; i++)
    {
        scanf("%d",&v);
        if (v%2==0)
        {
            pares++;
        }
        
    }
    printf("%d valores pares\n",pares);
    return 0;
}
