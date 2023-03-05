#include<math.h>

int length(char*str1);
void copy(char str1[],char str2[]);
void concat(char s1[],char s2[],int i);
int compare(char str1[],char str2[]);
int main()
{
    int i;
    char str1[20];
    char str2[20];
    printf("Enter the first word :");
    gets(str1);
    printf("Enter the second word: ");
    gets(str2);
    int l = length(str1);
    int l2 = length(str2);
    int c = compare(str1,str2);
    compare(str1,str2);
    concat(str1,str2,l);
    copy(str1,str2);
    printf("Length of string 1 : %d\n",l);
    printf("Length of string 2 : %d\n",l2);
    if (c==0)
    {
        printf("String 1 is equal to String 2\n");
    }
    else{
        printf("String 1 is not equal to String 2\n");
    }
    
    printf("Words after concatination: %s\n",str1);
    printf("String 2 After copy : %s\n", str2);
}



int length(char*str1)
{
    char*ptr=str1;
    int length =0;
    while (*ptr!='\0')
    {
        length++;
        ptr++;
    }
    return length;  
}

void concat(char s1[], char s2[],int i) {
	int j;
	for (j = 0; s2[j] != '\0'; i++, j++) {
		s1[i] = s2[j];
	}
	s1[i] = '\0';
}


void copy(char str1[],char str2[])
{
    int i;
    for (i = 0; str1[i] != '\0'; ++i) {
        str2[i] = str1[i];
    }

    str2[i] = '\0';
}

int compare(char str1[], char str2[])
{
    int flag =0, i=0;
    
         while (str1[i]!='\0' && str2[i]!='0')
        {
        if (str1[i]!=str2[i])
        {
            flag=1;
            break;
        }
        i++;
        }

        if (flag==0)
        {
           return 0;
        }
        else
        {
            return 1;
        }    
    
}
