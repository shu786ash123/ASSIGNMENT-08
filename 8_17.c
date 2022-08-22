#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
        {
            for(j=1;j<=i-1;j++)
                printf(" ");
            for(j=1;j<=9;j++)
                {
                    if(i==1||j==11-2*i||j==1)
                        printf("*");
                        else
                            printf(" ");

                } 
            printf("\n");        
        }
}