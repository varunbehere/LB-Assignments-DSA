#include<stdio.h>
#include<stdlib.h>

void Range(int iLength, int iNo1, int iNo2, int p[]){
  int i = 0;
  for (i = 0; i<iLength; i++){
    if (p[i] >= iNo1 && p[i] <= iNo2){
      printf("%d\t", p[i]);
    }
  }
}

int main (){
  int i=0, iSize = 0, iValue1= 0,iValue2= 0,   iRet = 0;
  int *Arr = NULL;
  printf("No of elements: ");
  scanf ("%d",&iSize);

  printf("Start & End: ");
  scanf("%d %d", &iValue1, &iValue2);
  Arr = (int *) malloc (iSize * sizeof(int));
  if (Arr == NULL){
    printf("Memory allocation Failed\n");
    return -1;
  }
  printf("Elements (%d) : \n", iSize );
  for (i = 0 ; i <iSize; i++){
    scanf("%d",&Arr[i]);
  }
  Range (iSize, iValue1, iValue2, Arr);
  return 0;
}
