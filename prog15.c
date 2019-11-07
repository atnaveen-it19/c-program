#include<stdio.h>
void main()
{
    int a[10];
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n");
    for(int i=0;i<10;i++)
    {
        if(a[i]==23)
        {
            printf("%d[%d]",a[i],i);
        }
    }
    
}
