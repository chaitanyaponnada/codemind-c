#include<stdio.h>
int con(int x,int a,int b)
{
    if(x<=a*1+b*2)
    {
        return 1;
        
    }else
    {
        return 2;
        
    }
    
}
int main()
{
    int a,b,x,y;
    scanf("%d%d%d",&x,&a,&b);
    y=con(x,a,b);
    if(y==1)
    {
        printf("Qualify");
        
    }
    else
    {
        printf("Not Qualify");
        
    }
    
}