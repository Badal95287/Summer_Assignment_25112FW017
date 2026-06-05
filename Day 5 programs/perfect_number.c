#include<stdio.h>
int main()
{
    int num,i,sum=0;
    printf("Enter the number:");
    scanf("%d",&num);
    for(i=1;i<num;i++)
    {
        if(num%i==0){
            sum=sum+i;
        }


    }
    if(sum==num && num>0){
        printf("%d is a perfect number",num);
    }
    else {
        printf("%d is not perfect number",num);
    }
    return 0;
}