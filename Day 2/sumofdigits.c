#include<stdio.h>
int main()
{
    int num,r,sum=0;
    printf("Enter the number :");
    scanf("%d",&num);
    while(num>0)
    {
        r=num%10;
        sum=sum+r;
        num=num/10;
    }
    printf("Sum of digits =%d",sum);
    return 0;
}