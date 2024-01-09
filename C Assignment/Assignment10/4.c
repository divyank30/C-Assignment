#include<stdio.h>
void printN(int);
void printN(int a)
{
    int i=1;
    for ( i = 1; i <=a; i++)
    {
        printf("%d",i);
    }
    
}
int main()
{
    int x;
    printf("Enter N natural Number");
    scanf("%d",&x);
    printN(x);
    return 0;
}