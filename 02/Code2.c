#include <stdio.h>

void Display (int iNo){
  if (iNo < 0){
    iNo = -iNo;
  }
  while (iNo > 0) {
    printf("*\n");
    --iNo;
  }
}
int main (){
  int iValue = 0;
  printf ("Number : ");
  scanf ("%d",&iValue);

  Display (iValue);
  return 0;
}
