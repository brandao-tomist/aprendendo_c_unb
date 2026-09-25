#include <stdio.h>
int main(){
    int n,quadrado,i;
    scanf("%d",&n);
    for (i = 2; i <= n; i++)
    {
        quadrado=i*i;
        if(i%2==0)
        printf("%d^2 = %d\n",i,quadrado);
    }
    
    return 0;
}
