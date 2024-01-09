// 5. Write a recursive function to print first N even natural numbers.
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
        
          evennatural(n-1);
          printf("%d ", 2*n);
    }
    
}