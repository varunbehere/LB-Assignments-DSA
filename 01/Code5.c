//  Program to Number of *

#include <stdio.h>

void Display (int iNo){
  int iCnt = 0;
  for (iCnt = 1; iCnt <= 5 ; iCnt++ ){
    printf ("*\n  ");
  }
}
int main (){
  int iValue = 0;
  printf ("Enter a number:");
  scanf ("%d", &iValue);

  Display(iValue);
  return 0;
}
