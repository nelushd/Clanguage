
#include <stdio.h>
int main()
{
    int i,num,fac=1 ;
    printf("Enter num: ");
    scanf("%d",&num);
    if(num<0)

        printf("Error");
     else if (num==0)
        printf("1");
     else{
        for(i=1;i<=num;i++){
        fac*=i;
     }
         printf("%d",fac);
     }
     }



