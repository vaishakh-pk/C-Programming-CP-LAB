#include<stdio.h>

struct class
{
    int reg;
    char name[20];
    int maths;
    int chem;
    int phy;
    int total;
};

int main()
{
    int n=0;
    struct class data[15];
    printf("Enter the number of stundents\n");
       scanf("%d",&n);

    for (int i = 0; i< n; i++)
    {
       printf("Enter the reg.no,name,marks(maths,physics,chemistry) of student %d :\n ",i+1);
       scanf("%d",&data[i].reg);
       scanf("%s",&data[i].name);
       scanf("%d",&data[i].maths);
       scanf("%d",&data[i].phy);
       scanf("%d",&data[i].chem);
       data[i].total=data[i].maths+data[i].phy+data[i].chem;
    }
    
    printf("\t\t\t ABC COLLAGE\n\t\t      Statement of Marks\n");
    printf("   Reg.no \t\tName \t Maths \t Phy \t Chem \t Total \n");

    for (int i = 0; i < n; i++)
    {
       printf("%5d %20s %9d %7d %7d %6d\n",data[i].reg,data[i].name,data[i].maths,data[i].phy,data[i].chem,data[i].total);
    }
    

}