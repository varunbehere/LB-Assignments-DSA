#include <stdio.h>

int Difference (int iNo){
  int iDigit = 0, iEvenSum = 0, iOddSum = 0, iDiff = 0;

  while (iNo != 0){
    iDigit = iNo % 10;
    if (iDigit % 2 == 0){
      iEvenSum += iDigit;
    }
    else {
      iOddSum += iDigit;
    }
    iNo /= 10;
  }
  iDiff = iEvenSum - iOddSum;
  return iDiff;
}

int main (){
  int iValue = 0, iRet = 0;

  printf("Number : ");
  scanf ("%d", &iValue);

  iRet = Difference (iValue);
  printf("Difference : %d\n", iRet);

  return 0;
}
