// 5. Write a recursive function to calculate sum of digits of a given number.
#include<stdio.h>
int sumdigit(int n);
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    printf("Sum of digit of given no. is %d",sumdigit(x) );
    return 0;
}
int sumdigit(int n)
{
    if (n>0)
    {
     return (n%10)+sumdigit(n/10);

    }
    
}