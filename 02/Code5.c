#include <stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL CheckEven (int iNo1){
  if (iNo1 % 2 == 0){
    return TRUE;
  }
  else {
    return FALSE;
  }
}

int main (){
  int iValue   = 0;
  BOOL bRet = TRUE;

  printf ("Number : ");
  scanf ("%d",&iValue);

  bRet = CheckEven (iValue);
  if (bRet == TRUE){
    printf ("%d is Even\n",iValue);
  }
  else{
    printf ("%d is odd\n",iValue);
  }
  return 0;
}
