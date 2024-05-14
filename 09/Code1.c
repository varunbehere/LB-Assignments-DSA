#include <stdio.h>

void Display (int iNo1, int iNo2 ){
  int iCnt = 0;
  for (iCnt = iNo1; iCnt <= iNo2; iCnt ++){
    printf ("%d\t",iCnt);
  }
}

int main (){
  int iValue1 = 0, iValue2 = 0;
  printf ("Enter Number 1 : ");
  scanf ("%d", &iValue1);
  printf ("Enter Number 2 : ");
  scanf ("%d", &iValue2);
  Display(iValue1, iValue2);
  return 0;
}
