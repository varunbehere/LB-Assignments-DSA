#include <stdio.h>

int LastOccurenceIndex(char *src, char ch){
  int iCnt = 0, lastIndex = 0;
  while (*src != '\0'){
    iCnt ++;
    if (*src == ch){
      lastIndex = iCnt;
    }
    src++;
  }
  return iCnt;
}

int main (){
  char Arr[30];
  char cValue  = '\0';
  int iRet = 0;

  printf("Search: ");
  scanf("%c", &cValue);

  getchar();

  printf("String: ");
  scanf("%[^'\n']s", Arr);


  iRet = LastOccurenceIndex(Arr, cValue);

  printf("Last Occurence at : %d\n", iRet);

  return 0;
}
