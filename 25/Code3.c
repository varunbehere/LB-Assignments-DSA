#include <stdio.h>

int Difference(char *src){
  int iCntCap = 0,iCntSmall = 0;

  while (*src != 0){
    if (*src >= 65 && *src <= 90 ){
      iCntCap ++;
    }
    if (*src >= 97 && *src<= 122    ){
      iCntSmall ++;
    }
    src++;
  }

  return (iCntSmall-iCntCap);
}

int main (){
  char Arr[30];
  int iRet = 0 ;
  printf("String : ");
  scanf ("%[^'\n']s", Arr);

  iRet = Difference (Arr);
  printf("Difference = %d\n",iRet );
  return 0;
}
