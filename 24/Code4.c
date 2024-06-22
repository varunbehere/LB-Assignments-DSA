#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSpecial(char ch)
{
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        return FALSE;
    }
    else
    {
       return TRUE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the Character : ");
    scanf("%c",&cValue);

    bRet = ChkSpecial(cValue);

    if (bRet == TRUE)
    {
        printf("it is a special character.");
    }
    else
    {
        printf("it is not a special character.");
    }
    

    return 0;
}