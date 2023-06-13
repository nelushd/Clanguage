#include <stdio.h>
int main()
{
int n1,n2;
printf("Enter first number\n");
scanf("%d",&n1);
printf("Enter second number\n");
scanf("%d",&n2);
if  (n1>n2)
    printf("%d is the highest number\n",n1);
else if(n2>n1)
    printf("%d is the highest number\n",n2);
else
    printf("Both numbers are equal.\n");
}
