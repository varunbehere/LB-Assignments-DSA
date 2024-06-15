#include  <stdio.h>
#include  <stdlib.h>
int Frequency (int iLength, int Arr[]){
  int i = 0, evenCounter = 0, oddCounter = 0;
  for (i = 0; i< iLength; i++){
    if (Arr[i] % 2 == 0) {
      evenCounter++;
    }
    else {
      oddCounter++;
    }
  }
  return evenCounter-oddCounter;
}
int main (){
  int iSize = 0, iRet = 0;
  int *p = NULL;
  int i = 0;

  printf("Enter the Size of an array : ");
  scanf("%d", &iSize);

  p = (int *) malloc (iSize * sizeof(int));
  if (p == NULL){
    printf("Unable to locate memory");
    return -1;
  }

  printf("Enter elements (%d) : ", iSize );
  for (i = 0; i< iSize; i++){
    scanf("%d", &p[i]);
  }

  iRet = Frequency (iSize, p);
  printf("Freq Diff between Even and Odd : %d\n", iRet );
  free (p);
  return 0;
}
