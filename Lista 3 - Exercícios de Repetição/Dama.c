#include <stdio.h>
#include <stdlib.h>
int main(){
    int x1,y1,x2,y2;
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    while (((x1)!=(0))&&((x2)!=(0))&&((y1)!=(0))&&((y2)!=(0))){
    
        //Para ausência de movimentos 
        if ((x2==x1)&&(y2==y1)){
            printf("0\n");
        }else{//Para movimentos verticais ou horizontais ou diagonais
            if (((y2==y1)&&((x2>x1)||(x2<x1)))||((x2==x1)&&((y2>y1)||(y2<y1)))||((abs(x2-x1)==abs(y2-y1))))
            {
                printf("1\n");
            }else{//Para os demais movimentos 
                printf("2\n");
            }
             }
             scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    } 
    return 0;
}
