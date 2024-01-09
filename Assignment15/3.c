// 3. Write a function to sort an array of any size. (TSRS)
#include<stdio.h>
int sort(int b[]);
int main()
{
    int a[10],i;
    sort(a);
    for ( i = 0; i <=9; i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}
int sort(int b[])
{
    int i,j;
    printf("enter 10 numbers");
    for (i = 0; i <=9; i++)
    {
        scanf("%d",&b[i]);
    }
    for ( i = 0; i <9; i++)
    {
        for (j=i+1;j<=9; j++)
        {
            if (b[i]>b[j])
            {
                /*Swapping*/
                b[i]=b[i]+b[j];
                b[j]=b[i]-b[j];
                b[i]=b[i]-b[j];
            }
            
        }
        
    }
    // for ( i = 0; i <=9; i++)
    // {
    //     printf("%d ",b[i]);
    // }
    return b[i];
    
    
}
