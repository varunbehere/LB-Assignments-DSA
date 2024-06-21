#include <stdio.h>
#include <stdlib.h>

void DigitsSum(int Brr[], int iLength){
  int iCnt = 0, iSum = 0, iNo = 0, i = 0;
  printf("Elements having 3 Digits: \n");
  for (i = 0; i< iLength; i++){
    iNo = Brr[i];
    while(iNo != 0){
      iSum += (iNo % 10);
      iNo = iNo / 10;
    }
    printf("%d \t", iSum);
    iSum = 0;
  }
  printf("\n");
}

int main (){
  int iSize = 0, iRet = 0, i = 0;
  int *Arr = NULL;
  printf("No of Elements: ");
  scanf("%d", &iSize);

  Arr = (int *) malloc (iSize * sizeof (int));
  if (Arr == NULL){
    printf("Memory Allocation Failed\n");
    return -1;
  }
  printf("Elements (%d):\n", iSize);
  for (i = 0 ; i < iSize ; i++){
    scanf ("%d", & Arr[i]);
  }

  DigitsSum (Arr, iSize);

  free(Arr);

  return 0;
}
