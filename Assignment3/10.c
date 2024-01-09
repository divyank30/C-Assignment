#include<stdio.h>
int main()
{
    float cp,sp,loss,profit;
    printf("Enter the cp and sp of the product");
    scanf("%f %f",&cp,&sp);
    if(sp>cp)
    {
        profit=((sp-cp)*100)/cp;
        printf("percentage profit is %f",profit);
    }
    else
    {
        loss=((cp-sp)*100)/cp;
        printf("percentage loss is %f",loss);
    }
}