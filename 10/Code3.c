#include <stdio.h>

int CountTwo (int iNo){
  int iDigit = 0, iFlag = 0;
  while (iNo != 0){
    iDigit = iNo % 10;
    if (iDigit == 2 ){
      iFlag ++;
    }
    iNo = iNo /10;
  }
  return iFlag;
}
int main (){
  int iValue = 0, iRet = 0;
  printf ("Enter a Number : ");
  scanf ("%d",&iValue);

  iRet = CountTwo(iValue);
  printf("Total no of Twos : %d", iRet);
  return 0;
}
