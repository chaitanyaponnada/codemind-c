#include<stdio.h>
int main(){
    int i;
    int n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int se;
    scanf("%d",&se);
    int c=0;
    for(i=0;i<n;i++){
        if(a[i]==se){
            c=c+1;
        }
    }
    printf("%d",c);
    
}