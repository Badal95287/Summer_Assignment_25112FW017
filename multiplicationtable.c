#include<stdio.h>
int main()
{
    int i,n,product;
    printf("Enter the number whose table to be printed :");
    scanf("%d",&n);
    for(int i=1;i<=10;i++)
    {
        product=n*i;
        printf("Multiplication table=%d",product);
    }
    return 0;
}