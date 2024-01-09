#include<stdio.h>
int main()
{
    int i,j,n,k;
    printf("Enter a number");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        k='A';
        for ( j = 0; j<=n; j++)
        {
            if (j>=i)
            {
                printf("%c",k++);
                 k=k+1;

            }
            else
            printf(" ");
            
        }
        printf("\n");
        
    }
    return 0;
    
}