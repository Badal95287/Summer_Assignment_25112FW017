#include<stdio.h>
int main()
{
    int decimal,binary[32],i=0;
    printf("Enter tje decimal number:");
    scanf("%d",&decimal);
    if(decimal==0){
        printf("Binary number: 0\n");
        return 0;
    }
    while(decimal>0){
        binary[i]=decimal%2;
        decimal=decimal/2;
        i++;
    }
    printf("Binary number:");
    for(int j=i-1;j>=0;j--){
        printf("%d",binary[j]);
    }
    printf("\n");
    return 0;
}