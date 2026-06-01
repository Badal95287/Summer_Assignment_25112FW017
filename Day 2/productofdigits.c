#include<stdio.h>
int main()
{
    int num,r,product=1;
    printf("Enter the number:");
    scanf("%d",&num);
    while(num>0)
    {
        r=num%10;
        product=product*r;
        num=num/10;

    }
    printf("Product of digits=%d",product);
    return 0;
}