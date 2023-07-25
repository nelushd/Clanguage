#include <stdio.h>
int main()
{
 float r,circum,area,volume,pi=3.14;
 int choice;
 printf("1 circumference \n");
 printf("2 area \n");
 printf("3 volume \n");
 printf("what is your choice \n");
 scanf("%d",&choice);
 switch (choice)
 {
 case 1:printf("Enter the radius :\n");
        scanf("%f",&r);
        circum=2.00*pi*r;
        printf("circumference is %f",circum);
  case 2:printf("Enter the radius :");
        scanf("%f",&r);
        area=pi*r*r;
        printf("area is %f",area);

 case 3:printf("Enter the radius :");
        scanf("%f",&r);
        circum=(4/3*pi*r*r*r);
        printf("volume is %f",volume);
 }

}
