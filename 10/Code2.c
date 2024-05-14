#include <stdio.h>

int CheckZero(int iNo){
  int iDigit = 0;
  int iFlag  = 0;
  while (iNo != 0){
    iDigit = iNo % 10;
     if (iDigit == 0){
       iFlag++;
     }
    iNo = iNo / 10;
  }
  return iFlag;
}

int main (){
  int iValue = 0;
  int iRet = 0;
  printf ("Number : ");
  scanf ("%d",&iValue);
  iRet = CheckZero (iValue);

  if (iRet > 0){
    printf ("Contains Zero");
  }
  else {
    printf ("no zeroes found");
  }
}
