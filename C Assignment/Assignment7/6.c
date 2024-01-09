#include<stdio.h>
int main()
{
    int i=2,j=2,k=0;
    while(j>i/2)
    if (j>i/2)
    {
        printf("%d\n",i);
        i++;
    }
    for ( i ; i < 100; i++)
    {
        j=2;
        do
        {
            if (((i%j)!=0)&&(j==(i/2)))
                {printf("%d\n",i);
                    break;
                }
                else
                j++;
        } while ((i%j)!=0);
        
    }
    // for ( i ; i < 100; i++)
    // {
    //     j=2;
    //      while ((i%j)!=0)
    //     {
    //         if(((i%j)!=0)&&(j==(i/2)))
    //             {
    //                 printf("%d\n",i);
    //                 break;}
                
    //         else
    //             j++;
            
    //     }
        
    // }
    return 0;
}