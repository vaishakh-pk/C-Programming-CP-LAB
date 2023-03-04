#include<stdio.h>
int key;
linear_search(int A[],int n,int key);
binary_search(int A[],int n,int key);
int main()
{
   int n =15;
   int markslist[]={100,98,97,95,94,92,91,90,85,84,83,81,80,78,75};
   printf("Enter your marks : ");
   scanf("%d",&key);
   linear_search(markslist,n,key);
   binary_search(markslist,n,key);
}

linear_search(int A[],int n,int key)
{
   int position=-1;
   int index=0;
   while (index< n && position<0)
   {
      if (A[index]==key)
      {
         position=index+1;
      }
      index++;
   }
   if (position>0)
   {
      printf("\t Linear Search\nMark: %d\nRank: %d\nNo.of iterations : %d",key,position,position);
   } 
   else
   {
      printf("The student failed");
   }
   return; 
}

binary_search(int A[],int n,int key)
{
int low=0,high=n-1,position=-1,count=1,mid;
mid=(low+high)/2;
while (low<=high)
{
   count=count+1;
   if (A[mid]==key)
   {
      position=mid;
      break;
   }
   else if (A[mid]<key)
   {
      high=mid-1;
   }
  else
   {
      low=mid+1;
   } 
   mid=(low+high)/2;
}
   if (position>0)
   {
      printf("\n\n\t Binary Search\nMark: %d\nRank: %d\nNo.of iterations : %d",key,position+1,count);
   }
 else
   {
      printf("\nThe student failed");
   }
   return;
}