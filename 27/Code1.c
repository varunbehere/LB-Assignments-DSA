#include <stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckChar(char *src, char ch){
  while (*src != '\0'){
    if (*src == ch){
      return TRUE;
    }
    src++;
  }
  return FALSE;
}

int main (){
  char Arr[30];
  char cValue  = '\0';
  BOOL bRet = FALSE;

  printf("Search: ");
  scanf("%c", &cValue);

  getchar();

  printf("String: ");
  scanf("%[^'\n']s", Arr);


  bRet = CheckChar(Arr, cValue);

  if (bRet == TRUE){
    printf("FOUND\n");
  }
  else{
    printf("NOT FOUND\n");
  }

  return 0;
}
