#include <stdio.h>
#include <stdlib.h>

int Largest (int Brr[], int iLength){
  int iLargest = 0, i = 0;
  for (i = 0; i< iLength; i++){
    if (Brr[i]> iLargest){
      iLargest = Brr [i];
    }
  }
  return iLargest;
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

  iRet = Largest (Arr, iSize);
  printf("Largest of All: %d \n", iRet);
  free(Arr);
  return 0;
}
