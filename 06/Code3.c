#include <stdio.h>

int Factorial(int iNo){
  int iCnt = 0, iMul = 1;
  for (iCnt = 1 ; iCnt <= iNo ; iCnt ++ ){
    iMul = iCnt * iMul;
  }
  return iMul;
}
int main (){
  int iValue = 0;
  int iRet = 0;
  printf("Enter a Number : ");
  scanf ("%d", &iValue);

  iRet = Factorial (iValue);
  printf ("Factorial of %d : %d",iValue,iRet);
  return 0;
}
