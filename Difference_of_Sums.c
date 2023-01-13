#include<stdio.h>
int main()
{
    int c=0,n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
       
c=c+i*i;
    }
    int j,s=0;
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        s=s+j;
    }
    printf("%d",(s*s)-c);
}