#include  <stdio.h>
#include  <stdlib.h>
int Display (int iLength, int Arr[]){
  int i = 0, iCounter = 0;
  for (i = 0; i< iLength; i++){
    if (Arr[i] % 2 == 0) {
      iCounter++;
    }
    }
  return iCounter;
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

  iRet = Display (iSize, p);
  printf("Total Even Nos : %d\n", iRet );
  free (p);
  return 0;
}
