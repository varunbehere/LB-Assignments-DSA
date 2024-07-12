#include <stdio.h>

int FirstOccurenceIndex(char *src, char ch){
  int iCnt = 0;
  while (*src != '\0'){
    iCnt ++;
    if (*src == ch){
      return iCnt;
    }
    src++;
  }
  return -1;
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


  iRet = FirstOccurenceIndex(Arr, cValue);

  printf("First Occurence at : %d\n", iRet);

  return 0;
}
