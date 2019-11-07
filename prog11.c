#include<stdio.h>
void main() {
    int a[10];
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<10;i++)
    {
        printf("%d[%d]=%p\n",a[i],i,&a[i]);
    }
    
    
}
