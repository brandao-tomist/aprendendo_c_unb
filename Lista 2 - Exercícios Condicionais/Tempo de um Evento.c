#include <stdio.h>
int main (){
    int dia1,hora1,minuto1,segundo1;
    int dia2,hora2,minuto2,segundo2;
    int dias, horas, minutos, segundos;

    scanf("Dia %d",&dia1);
    scanf("%d : %d : %d",&hora1,&minuto1,&segundo1);

    scanf(" Dia %d",&dia2);
    scanf("%d : %d : %d",&hora2,&minuto2,&segundo2);

    dias = dia2-dia1;
    horas = hora2-hora1;
    minutos = minuto2-minuto1;
    segundos = segundo2-segundo1;

    if(segundos<0){
        segundos += 60;
        minutos--;
    }
    if (minutos<0)
    {
        minutos += 60;
        horas--;
    }
    if (horas<0)
    {
        horas += 24;
        dias--;
    }
    printf("%d dia(s)\n",dias);
    printf("%d hora(s)\n",horas);
    printf("%d minuto(s)\n",minutos);
    printf("%d segundo(s)\n",segundos);
    
    return 0;
}
