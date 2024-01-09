#include<stdio.h>
int main()
{
    int a,b,i=1;
    printf("Enter two number");
    scanf("%d %d",&a,&b);
    while (1)
    {
        if (i%a==0 && i%b==0)
        {
            printf("LCM of %d & %d is %d",a,b,i);
            break;
            
        }
        else
        i++;
        
    }
    return 0;
    
}