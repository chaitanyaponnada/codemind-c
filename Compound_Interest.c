#include<stdio.h>
#include<math.h>
int main()
{
    float c,p,r,t;
    scanf("%f%f%f",&p,&r,&t);
    c=p*(pow((1+r/100.00),t))-p;
    printf("%.2f",c);
}