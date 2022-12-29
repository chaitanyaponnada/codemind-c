#include<stdio.h>
int main()
{
    int s,t,b,c,k;
    scanf("%d%d%d",&t,&s,&b);
    c=2*t*s*b*512;
    printf("%d KB",c/1024);
    
}