#include<stdio.h>
int hcf(int,int);
int hcf(int x,int y)
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
                return (x*y)/p;
            }
            
        }
        
        
    }
    
}
int main()
{
    int a,b;
    printf("Enter two Numbers");
    scanf("%d %d",&a,&b);
    printf("HCF Is %d",hcf(a,b));
    return 0;
}