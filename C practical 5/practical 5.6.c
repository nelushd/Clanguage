#include <stdio.h>
int main()
{
    int exp, base,result=1;
    printf("Enter base and exponent \n");
    scanf("%d %d",&base,&exp);
    while(exp>0)

       {

       result=result*base;
       exp--;
       }
       printf("The power is %d ",result);
}

