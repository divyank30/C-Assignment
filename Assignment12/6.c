// 6. Write a recursive function to print first N even natural numbers in reverse order
#include<stdio.h>
void evennatural(int);
int main()
{
    int x;
    printf("Enter Nth even natural number");
    scanf("%d",&x);
    evennatural(x);
}
void evennatural(int n)
{
    if (n>0)
    {
          printf("%d ", 2*n);
          
        
          evennatural(n-1);
    }
    
}