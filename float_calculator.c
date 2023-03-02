#include<stdio.h>
void printfirst();
void first();
void printsecond();
void second();
float a,b,c;
int main(){
    int choice;
    printf("\t\t\t****Choose the required operation****\n\t\t\t\tAddition.............. 1\n\t\t\t\tSubtraction........... 2\n\t\t\t\tMultiplication........ 3\n\t\t\t\tDivision.............. 4\n"
    );
    printf("\n\t\t\t\t\tYour Choice:");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1: 
        printfirst();
        first();
        printsecond();
        second();
        c=a+b;
        printf("%f+%f=%f",a,b,c);
        break;
    case 2: 
        printfirst();
        first();
        printsecond();
        second();
        c=a-b;
        printf("%f-%f=%f",a,b,c);
        break;
    case 3: 
        printfirst();
        first();
        printsecond();
        second();
        c=a*b;
        printf("%f*%f=%f",a,b,c);
        break;
    case 4: 
        printfirst();
        first();
        printsecond();
        second();
        c=a/b;
        printf("%f/%f=%f",a,b,c);
        break;
    
    default:
        printf("Enter a valid input\n");
        break;
    }

}
void printfirst(){printf("Enter the first number\n");}
void first(){scanf("%f",&a);}
void printsecond(){printf("Enter the Second number\n");}
void second(){scanf("%f",&b);}
