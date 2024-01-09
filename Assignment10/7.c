// 7. Write a function to calculate the number of combinations one can make from n items 
// and r selected at a time. (TSRS)
#include<stdio.h>
int comb(int,int);
int fact(int);
int main()
{
    int x,y;
    printf("Enter N items ");
    scanf("%d",&x);
    printf("Enter R Selected at a time");
    scanf("%d",&y);
    int t=fact(y);
    int s= fact(x);
    //printf("fact of x is %d and y is %d",s,t);
    printf("comb is %d  ",comb(x,y));
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
int comb (int n,int r)
{
    int c=fact(n)/(fact(r)*fact(n-r));
    return c;

}