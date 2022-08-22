#include<stdio.h>
int main()
{
    int i,j,count = 0;
    for(i=1;i<=4;i++)
    {
        count = 0;
        for(j=1;j<= (i-1);j++)
            printf(" ");
        for(j=1;j<=5-i;j++)
            printf("%d",++count);
            --count;

        while(count!=0)
            printf("%d",count--);
            printf("\n");        
    }
    return 0;
}