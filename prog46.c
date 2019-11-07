#include<stdio.h>
void main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int n;
    scanf("%d",&n);
    for(int i=0;i<10;i++)
    {
        if(a[i]==n)
        {
            printf("YES--->a[%d]",i);
        }
    }
}
