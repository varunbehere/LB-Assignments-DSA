#include <stdio.h>

int Count (int iNo){
  int iFlag = 0, iDigit = 0;
  while (iNo != 0){
    iDigit = iNo % 10 ;
    if (iDigit < 6){
      iFlag ++;
    }
    iNo = iNo / 10;
  }
  return iFlag;
}

int main (){
  int iValue = 0, iRet = 0;

  printf("Number : ");
  scanf("%d",&iValue);

  iRet = Count (iValue);
  printf("No fo Digits less than 6 : %d", iRet);
  return 0;
}
