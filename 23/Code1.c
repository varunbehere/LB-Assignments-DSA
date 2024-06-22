#include <stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL CheckAlphabet(char cValue){
  if (cValue > 64 && cValue <= 90 || cValue > 96 && cValue <= 122){
    return TRUE;
  }
  else{
    return FALSE;
  }
}

int main (){
  char ch = '\0';
  BOOL bRet = FALSE;

  printf("Enter a chracter : ");
  scanf("%c", &ch);

  bRet = CheckAlphabet (ch);

  if (bRet == TRUE){
    printf("It is Alphabet\n");
  }
  else{
    printf("Not an Alphabet\n");
  }

}
