// 8. Write a function to print PASCAL Triangle. (TSRN)
#include<stdio.h>
int comb(int,int);
int fact(int);
void pascal(int);
int main()
{
    int x,y;
    printf("Enter N items ");
    scanf("%d",&x);
    int s= fact(x);
    pascal(x);
    return 0;
}
int fact(int f )
{
    int i,s=1;
    for ( i = 1; i <=f; i++)
    {
        s=s*i;   
    }
    return s;   
}
int comb (int i,int j)
{
    int c=fact(i)/(fact(j)*fact(i-j));
    return c;

}
void pascal(int n)
{
    int i,j;
    for ( i = 0; i <=n; i++)
    {
        for ( j = 0; j <=i; j++)
        {
            printf("%d ",comb(i,j));
            
        }
        printf("\n");
        
    }
    
}