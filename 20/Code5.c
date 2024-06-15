#include <stdio.h>
#include <stdlib.h>

int Check (int iLength, int iNo, int Arr[]){
  int i = 0, iCounter = 0;
  for (i=0; i < iLength; i++){
    if (Arr[i]==iNo){
      iCounter ++;
    }
  }
  return iCounter;
}

int main (){
  int i = 0, iSize = 0, iValue = 0;
  int iRet = 0;
  int *p = NULL;

  printf("No of elements: ");
  scanf("%d",&iSize);

  printf("Number to find: ");
  scanf("%d", &iValue);

  p = (int *) malloc(iSize * sizeof (int));
  printf("Enter the elements (%d):", iSize);
  for (i = 0; i<iSize; i++){
    scanf("%d", &p[i]);
  }

  iRet = Check (iSize, iValue, p);
  printf("Total 11 found : %d\n",iRet);
  free (p);
  return 0;
}
