//Program to print $ & *  n no of times

#include <stdio.h>

void Display (int iNo){
  int iCnt = 0;
  for (iCnt = 1; iCnt <= iNo; iCnt ++){
    printf ("$\t*\t");
  }
  printf("\n");
}

int main (){
  int iValue = 0;
  printf ("Enter no of times you want to print : ");
  scanf ("%d", &iValue);
  Display(iValue);
  return 0;
}
