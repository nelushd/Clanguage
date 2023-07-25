#include <stdio.h>
int main()
{
    int n,r,rn=0;
    printf("Enter number \n");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        rn=rn*10+r;
        n/=10;

    }
    printf("%d",rn);
}
