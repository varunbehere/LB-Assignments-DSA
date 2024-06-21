#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int iLength, int iNo, int p[]){
  int i = 0, iIndex = 0;
  for (i = 0; i<iLength; i++){
    if (p[i] == iNo){
      return i;
    }
  }
  return -1;
}

int main (){
  int i=0, iSize = 0, iValue = 0, iRet = 0;
  int *Arr = NULL;
  printf("Enter the no of elements you want to insert: ");
  scanf ("%d",&iSize);

  printf("Enter the number you want to search for index: ");
  scanf("%d", &iValue);
  Arr = (int *) malloc (iSize * sizeof(int));
  if (Arr == NULL){
    printf("Memory allocation Failed\n");
    return -1;
  }
  printf("Enter the %d elements: \n", iSize );
  for (i = 0 ; i <iSize; i++){
    scanf("%d",&Arr[i]);
  }
  iRet =  FirstOcc (iSize, iValue, Arr);
  if (iRet == -1){
    printf("Not Found\n");
  }
  else{
    printf("First occurence of (%d) is at: %d\n",iValue, iRet );
  }
  return 0;
}
