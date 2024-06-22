#include <stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckCapital (char ch){
  if (ch >=65 && ch <=90){
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

  bRet = CheckCapital(cValue);
  if (bRet){
    printf("Capital\n");
  }
  else{
    printf("Small\n");
  }

  return 0;
}
