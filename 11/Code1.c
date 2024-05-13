#include <stdio.h>

int CountEven (int iNo){
  int iEvenCount = 0;
  while (iNo != 0){
    if ((iNo % 10) % 2 == 0){
      iEvenCount ++;
    }
    iNo /= 10;
  }
  return iEvenCount;
}

int main (){
  int iValue = 0, iRet = 0;

  printf("Number : ");
  scanf ("%d", &iValue);

  iRet = CountEven (iValue);
  printf("No of Even Numbers : %d\n", iRet);

  return 0;
}
