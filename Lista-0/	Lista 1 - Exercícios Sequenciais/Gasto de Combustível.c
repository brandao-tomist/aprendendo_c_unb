#include <stdio.h>
 
int main() {
 int tempo,velocidade;
 double litros;
 
  scanf("%d %d",&tempo, &velocidade);
  litros = (velocidade*tempo)/12.0;
  
  printf("%.3lf\n",litros);
  
    return 0; 
}
