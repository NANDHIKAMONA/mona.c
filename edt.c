#include<stdio.h>
void  main()
{
    int n,t;
    printf("enter the number");
    scanf("%d",&n);
    while(n!=0)
    {
        t=n%10;
        n=n/10;
    printf("%d",t);
}
}
