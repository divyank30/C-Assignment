//6. Write a function to print all Prime numbers between two given numbers. (TSRN)
#include<stdio.h>
void prime(int,int);
int main()
{
    int x,y;
    printf("Enter two number");
    scanf("%d %d",&x,&y);
    prime(x,y);
    return 0;

}
void prime(int a, int b)
{
    int i,j;
   
    printf("prime number between given number is :");
    for ( i = a;i<=b; i++)
    {
        int flag=1;
        for ( j = 2; j <i; j++)
        {
            if (i%j==0)
            {
                flag=0;
                break;
            }
       
        }
        if (i>1&&flag)
        {
            printf("%d ",i);
        }
        
        
    }
    
}