#include <stdio.h>
 
int main() {
    int codigo,qtd;
    float valor;
    scanf("%d %d",&codigo,&qtd);
    switch (codigo){
    case 1:
    valor = 4.00*qtd;
        printf("Total: R$ %.2f\n",valor);
        break;
    case 2:
     valor = 4.50*qtd;
        printf("Total: R$ %.2f\n",valor);
        break;
    case 3:
     valor = 5.00*qtd;
        printf("Total: R$ %.2f\n",valor);
        break;
    case 4:
     valor = 2.00*qtd;
        printf("Total: R$ %.2f\n",valor);
        break;
    case 5:
     valor = 1.50*qtd;
        printf("Total: R$ %.2f\n",valor);
        break;
    default:
        printf("Entrada invalida\n");
        break;
    }
    return 0;
}
