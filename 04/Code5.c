// Program to find Difference between summation of Factors and Non Factors of a number

#include <stdio.h>

int FactDiff(int iNo){
  int iCnt = 0, iSumNonFact = 0, iSumFact = 0, iDiff = 0;

  for (iCnt = 1; iCnt < iNo; iCnt ++){
    if (iNo % iCnt == 0){
      iSumFact = iSumFact + iCnt;
    }
    else {
      iSumNonFact = iSumNonFact + iCnt;
    }
  }
  iDiff = iSumFact - iSumNonFact;
  return iDiff;

}
int main (){
  int iValue = 0, iRet = 0;

  printf("Enter a Number : \n" );
  scanf("%d",&iValue);

  iRet = FactDiff(iValue);
  printf("Difference of Sum of Factors and NonFactors : %d",iRet);
  return 0;
}
