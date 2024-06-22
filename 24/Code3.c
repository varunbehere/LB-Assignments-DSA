#include<stdio.h>

void Display(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
       while (ch != 91)
       {
            printf("%c\t",ch);
            ch++;
       }
    }

    else if(ch >= 'a' && ch <= 'z')
    {
        while (ch != 96)
        {
            printf("%c\t",ch);
            ch--;
        }
    }
    else
    {
        printf("%c",ch);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the Character : ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}