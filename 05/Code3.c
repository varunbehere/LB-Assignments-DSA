// Program to accept a number from user and print the number line of that number

#include <stdio.h>

void Display(int iNo){
  int iCnt = 0;
  for (iCnt = (-iNo) ; iCnt <= iNo; iCnt ++){
    printf("%d ",iCnt );
  }
}
int main (){
  int iValue = 0;
  printf("Enter Number : ");
  scanf ("%d", &iValue);
  Display(iValue);
  return 0;
}
