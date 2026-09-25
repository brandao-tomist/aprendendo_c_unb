#include <stdio.h>

int main(){
    int i,i2,n,x,y;
    scanf("%d",&n);
    for (i = 0; i<n; i++)
    {
        int timp=0;
       scanf("%d %d",&x,&y);
       if (x>y)
       {
        x=y+x;
        y=x-y;
        x=x-y;
       }
       
       for (i2 = (x+1); i2 < y; i2++)
       {
            if((i2)%2 != 0)
        {
        timp+=i2;
        }
       }
       printf("%d\n",timp);
       
    }
    
    return 0;
}
