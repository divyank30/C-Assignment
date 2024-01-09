#include<stdio.h>
void primefact(int);
int main()
{
    int x;
    printf("Enter A Number");
    scanf("%d",&x);
    primefact(x);
    return 0;
}
void primefact(int a)
{
    int i,s=2;
    for ( i = 0;a>1; i++)
    {
        if (a%s==0)
        {
            printf("%d\n",s);
            a=a/s;
        }
        else
        s++;
        
    }
    

}
