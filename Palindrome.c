#include<stdio.h>
int main()
{
 int a,s=0,n,r;
 scanf("%d",&n);
 a=n;
 while(n!=0)
 {
     r=n%10;
     s=(s*10)+r;
     n=n/10;
 }
if(a==s)
printf("Palindrome");
else
printf("Not Palindrome");
}