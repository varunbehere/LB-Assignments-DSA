#include <stdio.h>

int CountSpaces(char *src){
  int iCnt = 0;
  while (*src != '\0'){
    if (*src ==32){
      iCnt++;
    }
    src++;
  }
  return iCnt;

}

int main (){
  char Arr[30];
  int iRet = 0;
  printf("String  : ");
  scanf("%[^'\n']s", Arr);

  iRet = CountSpaces(Arr);
  printf("Whitespaces: %d\n",iRet );
  return 0;
}
