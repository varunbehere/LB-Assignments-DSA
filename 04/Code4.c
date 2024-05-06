// Program to return the summation of Non Factors of a Number
#include <stdio.h>

int SumNonFact(int iNo){
  int iCnt = 0, iSum = 0;
  for (iCnt = 1; iCnt <= iNo ; iCnt ++ ){
    if (iNo % iCnt != 0){
      iSum = iSum + iCnt;
    }
  }
  return iSum;
}


int main (){
  int iValue = 0 , iRet = 0;

  printf("Enter a Number : " );
  scanf ("%d", &iValue);

  iRet = SumNonFact (iValue);
  printf("Sum of all Non Factors : %d\n",iRet );
  return 0;
}
