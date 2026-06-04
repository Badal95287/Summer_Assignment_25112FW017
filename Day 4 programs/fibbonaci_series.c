#include<stdio.h>
int main()
{
    int n,a=1,b=1,sum=0;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        printf("%d ",a);
        sum=a+b;
        a=b;
        b=sum;
    }
    return 0;
}