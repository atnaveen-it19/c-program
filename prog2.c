#include<stdio.h>
void main()
{
    int a,fac=1;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        fac*=i;
        
    }
    printf("%d",fac);
}
