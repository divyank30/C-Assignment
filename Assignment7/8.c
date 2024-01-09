#include<stdio.h>
int main()
{
    int i,j=2,count=0;
    printf("Enter A Prime number");
    scanf("%d",&i);
    i=i+1;
    if (j>i/2)
    {
        printf("Next Prime Number is %d\n",i);
        i++;
    }
    else
       while (1)
       {
        j=2;
        
       do
        {
            if (((i%j)!=0)&&(j==(i/2)))
                {printf("Next Prime number is %d\n",i);
                count=1;
                    break;
                }
            else
                j++;
        } while ((i%j)!=0);
        if (count==1)
        {
            break;

        }
        else
        i++;
        
       }
       
    
    
    return 0;
}