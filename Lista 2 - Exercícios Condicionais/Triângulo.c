#include <stdio.h>

int main(){
    float a,b,c,perimetro,area;
    scanf("%f %f %f",&a,&b,&c);
    if ((a>=(b+c)||b>=(a+c)||c>=(a+b)))
    {
        area = (a + b)*c/2;
        printf("Area = %.1f\n",area);
    }
        else{
            perimetro = a+b+c;
            printf("Perimetro = %.1f\n",perimetro);
        }
    
    return 0;

}
