//Program to display all non factors of a number 

#include <stdio.h>

void NonFact (int iNo){
  int iCnt = 0;
  for (iCnt = 1 ; iCnt <= iNo ; iCnt ++){
    if (iNo % iCnt != 0){
      printf("%d\n", iCnt );
    }
  }
}
int main (){
  int iValue = 0;

  printf ("Enter a Number :");
  scanf ("%d", &iValue);

  NonFact (iValue);
  return 0;
}
