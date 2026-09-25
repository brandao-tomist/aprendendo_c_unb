#include <stdio.h>

int main(){
    double v1,v2,v3;
    scanf("%lf %lf %lf",&v1,&v2,&v3);

    if (v1<v2){
        v1 = v1 + v2;
        v2 = v1 - v2;
        v1 = v1 - v2;
    }
        else{
            if(v1<v3){
                v1 = v1 + v3;
                v3 = v1 - v3;
                v1 = v1 - v3;    
            }
            else{
                if(v2<v3){
                    v2 = v2 + v3;
                    v3 = v2 - v3;
                    v2 = v2 - v3; 
                }
            }
        }
    if(v1<v3){
                v1 = v1 + v3;
                v3 = v1 - v3;
                v1 = v1 - v3;    
            }
            else{
                if(v2<v3){
                    v2 = v2 + v3;
                    v3 = v2 - v3;
                    v2 = v2 - v3; 
                }
            }
        
    if(v2<v3){
                    v2 = v2 + v3;
                    v3 = v2 - v3;
                    v2 = v2 - v3; 
                }
    if(v1>=(v2+v3)){
        printf("NAO FORMA TRIANGULO\n");
    }else{
        if((v1*v1)==(v2*v2)+(v3*v3)){
            printf("TRIANGULO RETANGULO\n");
        }else{
            if((v1*v1)>(v2*v2)+(v3*v3)){
                printf("TRIANGULO OBTUSANGULO\n");
            }else{
                if((v1*v1)<(v2*v2)+(v3*v3)){
                    printf("TRIANGULO ACUTANGULO\n");
                }
            }
    if((v1==v2)&&(v2==v3)){
        printf("TRIANGULO EQUILATERO\n");
    }else{
        if((v1==v2)||(v1==v3)||(v2==v3)){
            printf("TRIANGULO ISOSCELES\n");
        }
        }
        }
        }
    return 0;
}
