#include<stdio.h>
int lcm(int,int);
int lcm(int x,int y)
{
    int i,j,p,q;
    for ( i = 1;i<=y; i++)
    {
        p=x*i;
        for ( j = 1; j <=x; j++)
        {
            q=y*j;
            if (p==q)
            {
                return p;
            }
            
        }
        
        
    }
    
}
int main()
{
    int a,b;
    printf("Enter two Numbers");
    scanf("%d %d",&a,&b);
    printf("Lcm Is %d",lcm(a,b));
    return 0;
}