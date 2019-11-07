#include<stdio.h>

void main()
{
    float ar=0.00,c=0.00;
    float b=0.00,hm;
    int a[100],n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        c=c+a[i];  
        b+=1.00/a[i];
    }
    ar=c/n;
    hm=n/b;
    printf("%.2f-Am %.2f-hm",ar,hm);
    
}
