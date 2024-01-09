// 10. Write a recursive function to print reverse of a given number.
#include<stdio.h>
void reverse(int);
int main()
{
    int x;
    printf("Enter any number");
    scanf("%d",&x);
    printf("Reverse of the number is : ");
    reverse(x);
    
}
void reverse(int n)
{
    int rem;
    
    if (n>0)
    {
        rem=n%10;
     printf("%d",rem);
     reverse(n=n/10);

    }
       

}