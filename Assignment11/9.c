//9. Write a program in C to find the square of any number using the function.
#include<stdio.h>
int square(int);
int main()
{
    int x;
    printf("entea a number ");
    scanf("%d",&x);
    printf("Sqare of %d is %d",x,square(x));
}
int square(int n)
{
    return n*n;

}