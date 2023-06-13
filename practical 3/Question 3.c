#include <stdio.h>
int main()
{
char name[15];
float ns,bs,inc;
printf("Enter basic salary and name\n");
scanf("%f %s",&bs,&name);
if(bs<5000.00)
    inc=0.05;
if(10000.00>bs,bs>=5000.00)
    inc=0.1;
if(bs>=10000.00)
    inc=0.15;
ns=bs+(inc*bs);
printf("%s new salary is %.2f ",name,ns);

}
