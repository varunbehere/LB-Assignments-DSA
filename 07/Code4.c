#include <stdio.h>

int OddFactorial(int iNo){
  int iCnt = 0, iOddFact = 1;
  if (iNo < 0){
    iNo = -iNo;
  }
  for (iCnt = 1; iCnt <= iNo ; iCnt ++){
    if (iCnt % 2 != 0){
      iOddFact = iOddFact * iCnt;
    }
  }

  return iOddFact;
}
int main (){
  int iValue = 0, iRet = 0;
  printf ("Number : ");
  scanf ("%d", &iValue);

  iRet = OddFactorial (iValue);
  printf ("Odd factorial is : %d",iRet);
  return 0;
}
