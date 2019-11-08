#include<stdio.h>
void main()
{
    int a[10];
    int max=a[0];
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<10;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("%d",max);
}
