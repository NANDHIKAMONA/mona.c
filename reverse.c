#include<stdio.h>
int  main()
{
    int n,t;
    scanf("%d",&n);
    while(n!=0)
    {
        t=n%10;
        n=n/10;
    printf("%d",t);
}
return 0;
}
