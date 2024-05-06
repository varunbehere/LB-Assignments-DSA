#include <stdio.h>

void Display (int iNo){
  if (iNo < 10){
    printf ("Hello");
  }
  else {
    printf ("demo");
  }
}
int main (){
  int iValue = 0;
  printf ("Number : ");
  scanf ("%d",&iValue);

  Display (iValue);
  return 0;
}
