#include<stdio.h>
int main(){
    int x,n,result=1;
    printf("Enter the base:");
    scanf("%d",&x);
     
    printf("Enter exponent (n):");
    scanf("%d",&n);
     for(int i=0;i<=n; i++){
        result= result*x;
     }
     printf("%d^%d=%d\n",x,n,result);
     return 0;
}