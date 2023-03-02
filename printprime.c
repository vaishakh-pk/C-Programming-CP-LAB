#include<stdio.h>

int main(){
    int min,max,i,j,count;
    printf("Enter the starting value:");
    scanf("%d",&min);
    printf("Enter the ending value:");
    scanf("%d",&max);
    printf("The prime numbers between %d and %d are: ",min,max);
for ( i = min; i <=max; i++)
{ 
    count=0;
   for ( j=1; j<=i; j++)
   {
     if (i%j==0)
     {
        count++;
     }
     
   }
   if (count==2)
   {
      printf("%d, ",i);
   } 
   
}
return 0;
}