#include<stdio.h>
void main()
{
    int n,m;
    scanf("%d",&n);
    for(int i=1;i<=20;i++)
    {
       m=i*n;
       printf("\n%d * %d = %d",i,n,m);
    }
}
