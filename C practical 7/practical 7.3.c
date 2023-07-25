//Write a function that accepts 2 whole numbers as parameters and calculate and return the product.
int product(int a,int b)
{
    int product= a*b;
    return product;

}
int main()
{
    int x,y;
    printf("Enter 2 numbers ");
    scanf("%d %d",&x,&y);
    printf("Product= %d ",product(x,y));
}
