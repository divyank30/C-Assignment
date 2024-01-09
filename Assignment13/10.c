// 10. Write a program in C to calculate the power of any number using recursion.
#include<stdio.h>
int power(int,int);
int main()
{
    int x,y;
    printf("Enter Base number");
    scanf("%d",&x);
    printf("Enter Power Number");
    scanf("%d",&y);
    printf("%d^%d=%d",x,y,power(x,y));
}
int power(int b,int p)
{
    int result;
    if (p==0)
    {
     return 1;   
    }
    result = b*power(b,p-1);
        return result;
    
}