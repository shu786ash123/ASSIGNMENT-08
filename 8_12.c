#include<stdio.h>
int main()
{
    int i,j;
    char k;
    for(i=1;i<=4;i++)
        {
            k = 'A';
            for(j=1;j<=i-1;j++)
                printf(" ");
            for(j=1;j<=5-i;j++)
                {
                    printf("%c",k);
                    k++;
                }  
            
            --k;
            --k;
            while(k!=64)
                printf("%c",k--);      
                    printf("\n");
            
        }
}