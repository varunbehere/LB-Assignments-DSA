#include <stdio.h>

int CountSmall(char *src){
  int iCnt = 0;
  while (*src != 0){
    if (*src >= 97 && *src<= 122    ){
      iCnt ++;
    }
    src++;
  }
  return iCnt;
}

int main (){
  char Arr[30];
  int iRet = 0;

  printf("String: ");
  scanf ("%[^'\n']s",Arr);

  iRet = CountSmall(Arr);
  printf("Total small letters: %d\n", iRet);

  return 0;
}
