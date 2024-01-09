//5. Write a function to print first N prime numbers (TSRN)
#include<stdio.h>
void prime(int);
int main()
{
    int x;
    printf("Enter first N number is ");
    scanf("%d",&x);
    prime(x);
    return 0;

}
void prime(int a)
{
    int i,j,count=1;
    // if (a>=1)
    // {
    //     printf("First %d prime number are : ",a);
    //     printf("2 ");
    // }
    
    for ( i = 2;count<=a; i++)
    {
        int flag=1;
        for ( j = 2; j <i; j++)
        {
            if (i%j==0)
            {
                flag=0;
                break;
            }
            

            // if (j==(i-1))
            // {
            //     count++;
            //     printf("%d ",i);
            // }
           
            
        }
        if (flag)
        {
            count++;
            printf("%d ",i);
        }
        
        
    }
    
}