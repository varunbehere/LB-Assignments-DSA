#include <stdio.h>

int CheckFrequency(char *src, char ch){
  int iCnt = 0;
  while (*src != '\0'){
    if (*src == ch){
      iCnt ++;
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


  iRet = CheckFrequency(Arr, cValue);

  printf("Frequency : %d\n", iRet);

  return 0;
}
