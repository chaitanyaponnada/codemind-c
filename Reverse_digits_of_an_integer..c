#include<stdio.h>
int main()
{
    int n,a,s=0,r;
    scanf("%d",&n);
    a=n;
    while(n!=0)
    {
        r=n%10;
        s=(s*10)+r;
        n=n/10;
    }
    printf("%d",s);
}