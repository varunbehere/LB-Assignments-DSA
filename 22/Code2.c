#include <stdio.h>
#include <stdlib.h>

int Smallest (int Brr[], int iLength){
  int iSmallest = Brr[0], i = 0;
  for (i = 0; i< iLength; i++){
    if (Brr[i] < iSmallest){
      iSmallest = Brr[i];
    }
  }
  return iSmallest;
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

  iRet = Smallest (Arr, iSize);
  printf("Smallest of All: %d \n", iRet);
  free(Arr);
  return 0;
}
