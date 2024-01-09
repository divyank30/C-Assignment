#include<stdio.h>
int main()
{
    int i,j,k,l;
    for ( i =1; i <= 4; i++)
    {
        k=1,l=k-1;
        for ( j = 1; j<8; j++)
        {
            if (j>=5-i)
            {
                printf("%d",k);
                k++;
            }
            else if(j>=i+4)
            printf(" ");
            else
            printf("%d",i);
            
            
        }
        printf("\n");
        
    }
    return 0;
}