#include <stdio.h>

int main() {
    int i, n;
    float v1,v2,v3,media;
    scanf("%d",&n);
   for (i = 0; i <n; i++)
   {
    scanf("%f %f %f",&v1,&v2,&v3);
    media= ((2*v1)+(3*v2)+(5*v3))/10;
    printf("%.1f\n",media);
   }
   
    return 0;
}
