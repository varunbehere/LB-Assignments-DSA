#include <stdio.h>

void Display (int iNo1, int iNo2){
  int iCnt = 0;
  if (iNo2 < 0){
    iNo2 = -iNo2;
  }
  for (iCnt = 1; iCnt <= iNo2; iCnt++) {
    printf("%d ", iNo1);
  }
}
int main (){
  int iValue1 = 0, iValue2 = 0;
  printf ("Numbers : ");
  scanf ("%d %d",&iValue1, &iValue2);

  Display (iValue1, iValue2);
  return 0;
}
