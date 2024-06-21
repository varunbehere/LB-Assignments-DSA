#include <stdio.h>
#include <stdlib.h>
// #include <stdbool.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Check (int iLength, int iNo, int Arr[]){
  int i = 0;
  for (i=0; i < iLength; i++){
    if (Arr[i]==iNo){
      return TRUE;
    }
  }
  return FALSE;
}

int main (){
  int i = 0, iSize = 0, iValue = 0;
  int iRet = FALSE;
  int *p = NULL;

  printf("No of elements: ");
  scanf("%d",&iSize);

  p = (int *) malloc(iSize * sizeof (int));
  printf("Enter the elements (%d):", iSize);
  for (i = 0; i<iSize; i++){
    scanf("%d", &p[i]);
  }
  printf("Enter the number you want to search: ");
  scanf ("%d", &iValue);

  iRet = Check (iSize,iValue, p);
  if (iRet == TRUE){
    printf("True \n");
  }
  else{
    printf("False\n");
  }
  free (p);
  return 0;
}
