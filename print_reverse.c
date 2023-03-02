#include<stdio.h>
int main()
{
    int a[5][10];
    for(int i=0,k=50;i<5;i++)
    {
        for(int j=0;j<10;j++,k--)
        {
            a[i][j]=k;
        }
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<10;j++)
        {
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}