#include <stdio.h>

int main (){
    int n,i,um=1,dois=2,tres=3;

    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        if (i!=0)
        {
            um+=4;
            dois+=4;
            tres+=4;
        }
        printf("%d %d %d PUM\n",um,dois,tres);
    }
    
    return 0;

}
