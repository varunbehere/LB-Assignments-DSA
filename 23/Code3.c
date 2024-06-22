#include <stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckDigit (char ch){
  if (ch >=48 && ch <=57){
    return TRUE;
  }
  else{
    return FALSE;
  }
}

int main (){
  char cValue = '\0';
  BOOL bRet = FALSE;
  printf("Character : ");
  scanf("%c", &cValue);

  bRet = CheckDigit(cValue);
  if (bRet){
    printf("It is digit\n");
  }
  else{
    printf("Not a digit\n");
  }

  return 0;
}
