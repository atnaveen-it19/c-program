#include<stdio.h>
void main()
{
    int a[100],b,sum=0;
    scanf("%d",&b);
    for(int i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("\n%d",sum);
}
