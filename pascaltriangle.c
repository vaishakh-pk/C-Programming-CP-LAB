#include<stdio.h>
int main()
{
int row,space,col,max,val;

printf("Enter the number of rows:");
scanf("%d",&max);

for ( row = 0; row < max; row++)
{
    for (space = 0; space <max-row; space++)
    {
       printf(" ");
    }
    for ( col = 0; col<= row; col++)
    {
       if (row==0 || col==0)
       {
           val=1;
       }
       else{
           val=(val*(row-col+1))/col;
       }
        printf("%d ",val);
    }
    
    printf("\n");
    
}
return 0;
}