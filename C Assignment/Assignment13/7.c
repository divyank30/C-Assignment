// 7. Write a recursive function to calculate HCF of two numbers
#include<stdio.h>
int hcf(int,int);
int main()
{
    int x,y,result;
    printf("Enter two nmber");
    scanf("%d%d",&x,&y);
    if (x>y)
    {
        result=hcf(x,y);
        printf(" HCF Is %d",result);
    }
    else
    {
        result=hcf(y,x);
        printf("HCF IS %d",result);
    }

}
int hcf(int a,int b)
{
    if (b%a==0)
    {
        return a;
    }
     hcf(a,b%a);
    
    
    
    
    
}