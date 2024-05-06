#include <stdio.h>

void Display(int iNo){
  int iCnt = 0;
  // int iEvenNo = 2;
  for (iCnt = 1 ; iCnt <= iNo; iCnt ++){
      // printf ("%d ", iEvenNo);
      // iEvenNo = iEvenNo + 2;
      printf ("%d ", (iCnt * 2));
  }
}
int main (){
  int iValue   = 0;

  printf ("Number : ");
  scanf ("%d",&iValue);

  Display (iValue);
  return 0;
}
