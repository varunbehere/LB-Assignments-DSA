#include <stdio.h>

int MultiplyDigits (int iNo){
  int iDigit = 0,iCount = 0, iMul = 1;

  while (iNo != 0){
    iDigit = iNo % 10;
    iMul *= iDigit;
    iNo /= 10;
  }
  return iMul;
}

int main (){
  int iValue = 0, iRet = 0;

  printf("Number : ");
  scanf ("%d", &iValue);

  iRet = MultiplyDigits (iValue);
  printf("Multiplication : %d\n", iRet);

  return 0;
}
