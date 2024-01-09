//Write a recursive function to print octal of a given decimal number.
#include<stdio.h>
void dtob(int);
int main()
{
    int x;
    printf("Enter a NUmber");
    scanf("%d",&x);
    dtob(x);
    return 0;

}
void dtob(int n)
{
    if (n>0)
    {
        dtob(n/8);
        printf("%d",n%8);
    }
    
}