#include<stdio.h>
int main(){
    int i;
    int n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int odd;
    odd=a[0];
    for(i=0;i<n;i++){
        if(a[i]%2!=0){
            odd=i;
        }
    }
    printf("%d",odd);
    
}