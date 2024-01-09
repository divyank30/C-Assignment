// 6. Write a function in C to read n number of values in an array and display it in reverse 
//order
#include<stdio.h>
int reverse(int b[]);
int main()
{
    int a[10],i;
    reverse(a);
    for ( i =9; i >=0; i--)
    {  
    printf("%d ",a[i]);
    }
    return 0;
}
int reverse(int b[])
{
    int i;
    printf("Enter 10 number");
    for ( i = 0; i <=9; i++)
    {
        scanf("%d",&b[i]);
    }
    return b[i];

}