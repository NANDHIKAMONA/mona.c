#include<stdio.h>
#include<conio.h>
int main()
{
    int n,t,rev=0,a;
    printf("enter the character");
    scanf("%d",&n);
    while(n!=0)
    {
        t=n/10;
        rev=rev*10+t;
        n=n/10;
    }
    if(rev==a)
    {
        printf("palindrom");
    }
    else
    {
        printf("not a palindrome");
    }
    return 0;
}
