#include <stdio.h>

int main (){
    int codigo,a=0,g=0,d=0;
    
    scanf("%d",&codigo);
    while (codigo!=4)
    {
        scanf("%d",&codigo);
        switch (codigo)
        {
        case 1:
            a++;
            break;
        case 2:
            g++;
            break;
        case 3:
            d++;
            break;
        default:
            break;
        }
    }
    
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",a);
    printf("Gasolina: %d\n",g);
    printf("Diesel: %d\n",d);
    return 0;

}
