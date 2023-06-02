#include<stdio.h>
int main(){
    int i;
    int n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int c=0;
    int odd;
    scanf("%d",&odd);
    for(i=0;i<n;i++){
        if(a[i]==odd){
            c=c+1;
        }
    }
    printf("%d",c);
    
}