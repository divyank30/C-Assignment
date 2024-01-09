#include<stdio.h>
int main()
{
    int r;
    float a;//Area of the circle
    printf("write the radious of the circle");
    scanf("%d",&r);
    a=3.14*r*r;
    printf ("Area of Circle is %.2f having the radius %d ",a,r);
    return 0;
}