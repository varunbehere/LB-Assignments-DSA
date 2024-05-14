#include <stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckZero(int iNo){
  int iDigit = 0;
  int iFlag  = 0;
  while (iNo != 0){
    iDigit = iNo % 10;
     if (iDigit == 0){
       iFlag = TRUE;
       break;
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

  if (iRet == TRUE){
    printf ("Contains Zero");
  }
  else {
    printf ("no zeroes found");
  }
}
