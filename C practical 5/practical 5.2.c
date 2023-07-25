
#include <stdio.h>
int main()
{
    int i,marks,sum=0;
    float avg;
    printf("Input the 10 numbers : \n");
    for (i=1;i<=10;i++)
    {
        printf("Mark- %d :",i);
        scanf("%d",&marks);
        sum=marks+sum; //sum+=mark
    }
    avg=sum/10.00;
    printf("the sum is %d \n the average is %f \n ",sum,avg);
    if (avg<50)
        printf("faile");
        else
        printf("pass");
}
