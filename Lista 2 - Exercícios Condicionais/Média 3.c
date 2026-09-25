#include <stdio.h>
 
int main() {
    float n1,n2,n3,n4,ne,media,mediaf;
    scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
    media = (n1*2 + n2*3 + n3*4 + n4*1)/10;
    if (media>=7.0)
    {
        printf("Media: %.1f\nAluno aprovado.\n",media);
    }
        else{
            if (media<5.0)
            {
                printf("Media: %.1f\nAluno reprovado.\n",media);
            }
                else{
                    if ((media>=5.0)&&(media<=6.9) ){
                        printf("Media: %.1f\nAluno em exame.\n",media); 
                        scanf("%f",&ne);
                        mediaf = (media+ne)/2;
                        printf("Nota do exame: %.1f\n",ne);
                        if (mediaf>=5.0){
                            printf("Aluno aprovado.\nMedia final: %.1f\n",mediaf);
                        }   else{
                                printf("Aluno reprovado.\nMedia final: %.1f\n",mediaf);
                        }
                        {
                        }
                        
                       {
                       }
                       
                    }
                    
                }
            
        }
    
    return 0;
}
