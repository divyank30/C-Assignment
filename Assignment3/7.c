#include<stdio.h>
int main()
{
    int D,a,b,c;
    D=b*b-(4*a*c);
    printf("Enter a b and c of the quardic equation\n");
    scanf(" %d %d %d",&a,&b,&c);
    if(D>0)
    printf("This quardic euqtion having real & distinct");
    if(D==0)
    printf("This quardic equation having two real & same roots");
    if(D<0)
    printf("This quardic equation having imaginry roots");
    return 0;
}