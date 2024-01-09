#include<stdio.h>
int fn(int,int);
int main()
{
    int x,y,z;
    printf("Enter the number");
    scanf("%d",&x);
    printf("Enter a digit");
    scanf("%d",&y);
    z=fn(x,y);
    if (z==1)
    {
        printf("Given Number  contains the given digit %d ",y);
    }
    else
    printf("Not contains Given digit in the given number");
    return 0;


}
int fn(int a,int b)
{
    int i,s;
    for (i = 1;a>0; i++)
    {
        if(a%10==b)
        {
            return 1;
        }
        else
        a=a/10;
    }
    
}