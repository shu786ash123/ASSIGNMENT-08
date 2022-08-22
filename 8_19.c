#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=3;i++)
        {
            for(j=1;j<=19;j++)
                {
                    if(4-i<=j&&j<7+i || 13-i<j&&j<17+i)
                        printf("*");
                    else
                        printf(" ");    
                }
                printf("\n");    
        }
    for(i=1;i<=10;i++)
        {
                for(j=1;j<=19;j++)
                    {
                        if((i==1) && (j == 7))
                            printf("MySirG");
                            if((i==1) && (7<=j) && (j<=12))
                                continue;
                            
                        if(i<=j && j<=20-i)
                                printf("*");
                        else
                                printf(" ");        
                    }
                    printf("\n");
        }
         
return 0;
}



    