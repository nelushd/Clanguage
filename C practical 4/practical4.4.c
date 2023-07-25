4)	#include <stdio.h>
int main()
{
    char ch;
    printf ("Enter a letter \n");
    scanf("%c",&ch);
    switch(ch)
    {
    case 'a':printf("it's a vowel");break;
    case 'e':printf("it's a vowel");break;
    case 'u':printf("it's a vowel");break;
    case 'i':printf("it's a vowel");break;
    case 'o':printf("it's a vowel");break;
    default:printf("%c is not a vowel \n",ch);}
}

