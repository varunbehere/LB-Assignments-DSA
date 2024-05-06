// Program to display the Multiplication of all the factors of a number

#include <stdio.h >

int Multfact(int iNo){
  int iMul = 1;
  int iCnt = 0;
  for (iCnt = 1 ; iCnt <= (iNo / 2); iCnt ++ ){
    if (iNo % iCnt == 0){
      iMul = iMul * iCnt;
    }
  }
  return iMul;
}
int main (){
  int iValue = 0, iRet = 0;

  printf("Enter a Number :\n" );
  scanf ("%d",&iValue);

  iRet = Multfact (iValue);
  printf ("%d", iRet);

  return 0;
}
