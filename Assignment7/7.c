#include<stdio.h>
int main()
{
    int i,k=2,j;
    printf("Enter two number");
    scanf("%d %d",&i,&j);
    while(k>i/2)
    if (k>i/2)
    {
        printf("%d\n",i);
        i++;
    }
    for ( i ; i < j; i++)
    {
        k=2;
        do
        {
            if (((i%k)!=0)&&(k==(i/2)))
                {printf("%d\n",i);
                    break;
                }
                else
                k++;
        } while ((i%k)!=0);
        
    }
    return 0;
}