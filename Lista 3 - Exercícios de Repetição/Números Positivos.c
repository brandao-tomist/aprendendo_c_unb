#include <stdio.h>
int main(){
    int i,vp=0;
    float v;
    for (i=0; i < 6; i++)
    {
        scanf("%f",&v);
        if (v>0)
        {
            vp++;
        }
        
    }
    printf("%d valores positivos\n",vp);
return 0;
}
