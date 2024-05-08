#include <stdio.h>

int DollarToINR(int iNo){
  int iRes = 0;
  iRes = iNo * 70;
  return iRes;
}
int main (){
  int iValue = 0, iRet = 0;
  printf ("Amount in USD : ");
  scanf("%d",&iValue);

  iRet = DollarToINR (iValue);
  printf ("Value in INR : %d",iRet);

  return 0;
}
