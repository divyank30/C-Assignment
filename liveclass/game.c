#include<stdio.h>
int main()
{
    int i=1,n;
    do
    {
        printf("enter an even no.");
        scanf("%d",&n);
        if(n%2==0)
       { 
       
        break;
        }
        else
        i++;
    } 
    while(i<=3);
    if(n%2==0)
     printf("Shabas, tum insaan ho, khelne jao");
    else
    printf("Gadhe ho tum ,padhne jao");
    return 0;
}