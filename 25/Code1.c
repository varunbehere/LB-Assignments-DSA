#include <stdio.h>

int CountCapital(char *src){
  int iCnt = 0;
  while (*src != '\0'){
    if (*src >= 65 && *src <= 90 ){
      iCnt ++;
    }
    src++;
  }
  return iCnt;
}

int main (){
  char arr[20];
  int iRet = 0;

  printf("String: ");
  scanf ("%[^'\n']s",arr);
  iRet = CountCapital(arr);
  printf("Total Capital Letters: %d\n",iRet );
}
