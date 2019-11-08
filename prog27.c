#include<stdio.h>
void main()
{
    int r,c,m,n,i,j;
    scanf("%d %d",&r,&c);
    scanf("%d %d",&m,&n);
    int a[r][c],b[m][n];
    int sum[r][c],diff[r][c];
    if(r==m && c==n)
    {
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
         for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
         for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                sum[i][j]=a[i][j]+b[i][j];
                diff[i][j]=a[i][j]-b[i][j];
            }
        }
        printf("\n sum:");
         for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                printf("%d\t",sum[i][j]);
            }
            printf("\n");
        }
        printf("\n diff:");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                printf("%d\t",diff[i][j]);
            }
            printf("\n");
        }
        
    }
}
