#include <stdio.h>
 
int main() {
 int p1, n1;
 int p2, n2;
 float v1, v2, valor;
 
 scanf("%d %d %f",&p1,&n1,&v1);
 scanf("%d %d %f",&p2,&n2,&v2);
 
 valor = (n1*v1) + (n2*v2);
 
 printf("VALOR A PAGAR: R$ %.2f\n",valor);
    return 0;
}
