// 9. Write a program in C to count the digits of a given number using recursion.
#include<stdio.h>
int countdigit(int,int);
int main()
{
    int x,count=0;
    printf("Enter a number");
    scanf("%d",&x);
    printf("Toal Digit in this number is %d",countdigit(x,count));

}
int countdigit(int n,int c)
{
   static int count=0;
    if (n>0)
    {
        
        countdigit(n/10,c++);
        count=count+1;
    }
    return count;
}
