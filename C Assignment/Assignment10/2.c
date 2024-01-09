#include<stdio.h>
int si(int,int,int);
int si (int x,int y,int z)
{
    return (x*y*z)/100; 
}
int main()
{
    int p,r,t;
    printf("Enter principle amount ");
    scanf("%d",&p);
    printf("Enter rate");
    scanf("%d",&r);
    printf("Enter time ");
    scanf("%d",&t);
    printf("Simple interst is %d",si(p,r,t));
    return 0;

}