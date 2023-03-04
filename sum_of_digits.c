#include<stdio.h>

int main(){
int sum=0;
int a,b;
printf("Enter the number\n");
scanf("%d",&a);
if (a<0)
{
    a*=(-1);
}
b=a;
while (a)
{
    sum=sum+a%10;
    a=a/10;
}
 printf("The sum of digits of %d is %d",b,sum);
 return 0;
}
