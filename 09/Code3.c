#include <stdio.h>

int RangeSum (int iNo1, int iNo2 ){
  int iCnt = 0;
  int iSum = 0;
  for (iCnt = iNo1; iCnt <= iNo2; iCnt ++){
    iSum = iSum + iCnt;
  }
  return iSum;
}

int main (){
  int iValue1 = 0, iValue2 = 0, iRet = 0;
  printf ("Enter Number 1 : ");
  scanf ("%d", &iValue1);
  printf ("Enter Number 2 : ");
  scanf ("%d", &iValue2);
  if (iValue1 < 0|| iValue2 < 0  || iValue1 > iValue2){
    printf("Invalid Range\n" );
  }
  else {
    iRet =  RangeSum(iValue1, iValue2);
    printf ("Sum of Numbers in Range : %d", iRet);
  }
  return 0;
}
