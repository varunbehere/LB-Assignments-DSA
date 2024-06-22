#include <stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckSmall (char ch){
  if (ch >=97 && ch <=122){
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

  bRet = CheckSmall(cValue);
  if (bRet){
    printf("Small alphabet\n");
  }
  else{
    printf("Any other character\n");
  }

  return 0;
}
