#include <stdio.h>
int main()
{
float n1,n2;
char opt;
printf("input your operator (+,-,*,/) \n");
scanf("%c",&opt);
printf("Enter the first number\n");
scanf("%f",&n1);
printf ("Enter the second number\n");
scanf("%f",&n2);

switch(opt)
{
    case '+':printf("the addition of %.2f and %.2f is %.2f\n",n1,n2,n1+n2);break;
    case '-':printf("the substraction of %.2f and %.2f is %.2f\n",n1,n2,n1-n2);break;
    case '*':printf("the multiplication of %f and %f is %f\n",n1,n2,n1*n2);break;
    case '/':printf("the division of %f and %f is %f\n",n1,n2,n1/n2);break;
    default:printf("you have entered a invalid operation");
}

}

