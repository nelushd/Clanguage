#include <stdio.h>
int main()
{
int n1,n2,n3,max,min;
printf("Enter first number\n");
scanf("%d",&n1);
printf("Enter second number\n");
scanf("%d",&n2);
printf("Enter third number\n");
scanf("%d",&n3);
max=n1;
min=n1;
if(n2>max)
    max=n2;
if(n3>max)
    max=n3;
if(n1<min)
    min=n2;
if(n3<min)
    min=n3;
printf("largest value is %d\n",max);
printf("Smallest value is %d\n",min);


}
