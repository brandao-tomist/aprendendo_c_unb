#include <stdio.h>
int main(){
    int i,vp;
    float v=0, media,soma=0.0,vpf=0.0;
    for (i=0; i < 6; i++)
    {
        scanf("%f",&v);
        if (v>0)
        {
            soma+=v;
            vp++;
            vpf=vp;
        }
        
    }
    media = soma/vp;
    printf("%d valores positivos\n",vp);
    printf("%.1f\n",media);
    return 0;
}
