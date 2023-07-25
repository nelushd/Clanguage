//Write a function that accepts 2 numbers as parameters and calculate and display sum and difference.

void display(int n1,int n2)
{
    int sum,diff;

 printf("sum= %d ",n1+n2);
 printf("difference= %d ",n1-n2);
}
int main()
{
    int a,b;
    printf("Enter 2 numbers ");
    scanf("%d %d",&a,&b);
    display(a,b);

}
