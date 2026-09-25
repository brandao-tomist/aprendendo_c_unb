#include <stdio.h>
 
int main() {
double a,b,c,tr,ci,tz,q,r;
const double pi = 3.14159;

    scanf("%lf %lf %lf",&a,&b,&c);
 tr = (a*c)/2;
 ci = pi*(c*c);
 tz = ((a+b)*c)/2;
 q = b*b;
 r = a*b;
   
   printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", tr, ci, tz, q, r);
  
    return 0;
}
