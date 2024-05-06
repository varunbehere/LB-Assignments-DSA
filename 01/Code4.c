// Accept one Number from user and check whether it is divisible by 5 or not

#include <stdio.h>
#include <stdbool.h>

#define TRUE  1
#define FALSE 0
typedef int BOOL;

bool Check (int iNo){
  if (iNo % 5 == 0){
    return TRUE;
  }
  else {
    return FALSE;
  }
}
int main (){
  int iValue = 0 ;
  BOOL bRet = FALSE;

  printf("Enter a Number :\n" );
  scanf ("%d",&iValue);

  bRet = Check (iValue);
  if (bRet == FALSE){
    printf ("%d is not divisible by 5",iValue);
  }
  else {
    printf ("%d is divisible by 5",iValue);
  }

  return 0;
}
