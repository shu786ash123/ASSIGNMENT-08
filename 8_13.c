#include<stdio.h>
int main()
{
    int i,j;
    char k;
    for(i=1;i<=7;i++)
        {
            k='A';
            for(j=1;j<=8-i;j++)
                printf("%c",k++);
            for(j=1;j<=2*i-3;j++)
                printf(" ");
            
                    --k;
                if(i==1)
                    k--;
             
                while(k!=64)
                

                    printf("%c",k--);
                    
                printf("\n");
        }
        return 0;
}        