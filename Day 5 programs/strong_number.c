#include<stdio.h>
int main()
{
    int num,originalNum,rem,sum=0;
    printf("Enter the number:");
    scanf("%d",&num);
    originalNum=num;
    while(num>0){
        rem=num%10;
        int fact=1;
        for(int i=1;i<=rem;i++){
            fact=fact*i;
        }
        sum=sum+fact;
        num=num%10;
    }
    if(sum==originalNum && originalNum>0){
        printf("%d is a strong number",originalNum);
    }
    else{
        printf("%d is not a strong number",originalNum);
    }
    return 0;
}