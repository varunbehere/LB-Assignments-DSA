#include <stdio.h>

void DisplayReverse(int iNo1 , int iNo2){
  int iCnt = 0;
   for (iCnt = iNo2; iCnt >= iNo1; iCnt --){
     printf ("%d\t",iCnt);
   }
}

int main (){
  int iValue1 = 0 , iValue2 = 0;
  printf ("No 1 : ");
  scanf("%d",&iValue1);
  printf ("No 2 : ");
  scanf("%d",&iValue2);

  DisplayReverse(iValue1,iValue2);
}
