#include<stdio.h>
void main()
{
    int a[100],max=a[0],i;
    for(i=0;i<100;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<100;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("%d",max);
}
