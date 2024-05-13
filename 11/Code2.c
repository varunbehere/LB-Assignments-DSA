#include <stdio.h>

int CountOdd (int iNo){
  int iOddCount = 0;
  while (iNo != 0){
    if ((iNo % 10) % 2 != 0){
      iOddCount ++;
    }
    iNo /= 10;
  }
  return iOddCount;
}

int main (){
  int iValue = 0, iRet = 0;

  printf("Number : ");
  scanf ("%d", &iValue);

  iRet = CountOdd (iValue);
  printf("No of Odd Numbers : %d\n", iRet);

  return 0;
}
