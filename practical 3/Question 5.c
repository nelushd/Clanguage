#include <stdio.h>
int main()
{
int n1,n2,x;

printf("Enter 2 numbers\n");
scanf("%d %d",&n1,&n2);
x=n1%n2;
if(x==0)
    printf("%d is a multiple of %d",n1,n2);
else
    printf("%d is not a multiple of %d",n1,n2);
}
