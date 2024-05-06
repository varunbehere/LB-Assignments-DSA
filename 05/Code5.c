//Program that accept n from the user and print the first five multiples of that n

#include <stdio.h>

void DisplayMultiple(int iNo){
  int iMultiple = 0;
  int iCnt = 0;
  for (iCnt = 1; iCnt <= 5; iCnt ++){
    iMultiple = iNo * iCnt;
    printf("%d\n",iMultiple );
  }
}
int main (){
  int iValue = 0;
  printf("Enter a number : ");
  scanf ("%d", &iValue);
  DisplayMultiple (iValue);
  return 0;
}
