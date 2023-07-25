#include <stdio.h>

 float q(int x,int y)
{


float q=(float) x/y;
return q;
}
int main()

{int a,b;

printf("Enter 2 numbers ");

scanf("%d %d", &a, &b);
printf("Quotient = %.2f",q(a,b));

}
