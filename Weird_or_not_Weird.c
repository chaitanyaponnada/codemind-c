#include<stdio.h>
int main()
{
 int n;
 scanf("%d",&n);
 if(n%2!=0)
 printf("weird");
 if(n%2==0)
 {
     if(n<=2&&n>=5)
     printf("not weird");
     if(n<=60&&n>=20)
     printf("weird");
     if(n<20)
     printf("not weird");
 }
}