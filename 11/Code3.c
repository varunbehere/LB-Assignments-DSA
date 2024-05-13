#include <stdio.h>

int RangeCheck (int iNo){
  int iCount = 0;
  while (iNo != 0){
    if ((iNo % 10) >= 3 && (iNo % 10) <= 7){
      iCount ++;
    }
    iNo /= 10;
  }
  return iCount;
}

int main (){
  int iValue = 0, iRet = 0;

  printf("Number : ");
  scanf ("%d", &iValue);

  iRet = RangeCheck (iValue);
  printf("Total Numbers in the Range : %d\n", iRet);

  return 0;
}
