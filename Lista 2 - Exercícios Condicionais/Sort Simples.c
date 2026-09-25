#include <stdio.h>
 
int main() {
    int v1,v2,v3;
    scanf("%d %d %d",&v1,&v2,&v3);
    int a1=v1, a2=v2, a3=v3;
   
    if (v1>v2){
        v1 = v1 + v2;
        v2 = v1 - v2;
        v1 = v1 - v2;
    }   else{
            if(v1>v3){
                v1 = v1 + v3;
                v3 = v1 - v3;
                v1 = v1 - v3;
            }   else{
                    if(v2>v3){
                        v2 = v2 + v3;
                        v3 = v2 - v3;
                        v2 = v2 - v3;
                    }
            }
    }
    if(v1>v3){
                v1 = v1 + v3;
                v3 = v1 - v3;
                v1 = v1 - v3;
            }   else{
                    if(v2>v3){
                        v2 = v2 + v3;
                        v3 = v2 - v3;
                        v2 = v2 - v3;
                    }
            }
    if(v2>v3){
                        v2 = v2 + v3;
                        v3 = v2 - v3;
                        v2 = v2 - v3;
                    }
    printf("%d\n%d\n%d\n\n",v1,v2,v3);
    printf("%d\n%d\n%d\n",a1,a2,a3);
    return 0;
}
