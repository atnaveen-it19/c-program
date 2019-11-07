#include<stdio.h>
void main() {
    char a[20];
    gets(a);
    for(int i=0;i<14;i++)
    {
        printf("%c[%d]=%p\n",a[i],i,&a[i]);
    }
    
}
