//Program to accept number from the user and print upto that number

#include <stdio.h>

void Display(int iNo){
  int iCnt = 0;
  for (iCnt = 1; iCnt <= iNo; iCnt ++){
    printf("%d\n",iCnt );
  }
}
int main (){
  int iValue = 0;
  printf("Enter Number : ");
  scanf ("%d", &iValue);
  Display(iValue);
  return 0;
}
