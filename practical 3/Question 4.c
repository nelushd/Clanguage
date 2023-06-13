#include <stdio.h>
int main()
{
float pi,r,dm,area,c;
printf("Enter the radius\n");
scanf("%f",&r);
pi=3.14159;
dm=(2*r);
c=2*pi*r;
area=pi*r*r;
printf("Diameter is %.2f circumference is %.2f Area is %.2f ",dm,c,area);

}
