#include <stdio.h>

int Display(int iNo){
  int iCnt = 0;

  if (iNo < 0) {
    iNo = -iNo;
  }

  iCnt = 1;
  while (iCnt <= iNo) {
    printf ("*\n");
    iCnt++;
  }
}

int main (){
  int iValue = 0;
  printf ("Number : ");
  scanf ("%d",&iValue);

  Display (iValue);
  return 0;
}
