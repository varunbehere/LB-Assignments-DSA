#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

int LastOcc(int iLength, int iNo, int p[]){
  int i = 0, iIndex = 0, flag = FALSE;
  for (i = 0; i<iLength; i++){
    if (p[i] == iNo){
      iIndex = i;
      flag  = TRUE;
    }
  }
  if (flag ==  TRUE ){
    return iIndex;
  }
  else {
    return -1;
  }
}

int main (){
  int i=0, iSize = 0, iValue = 0, iRet = 0;
  int *Arr = NULL;
  printf("No of elements: ");
  scanf ("%d",&iSize);

  printf("No to be Searched: ");
  scanf("%d", &iValue);
  Arr = (int *) malloc (iSize * sizeof(int));
  if (Arr == NULL){
    printf("Memory allocation Failed\n");
    return -1;
  }
  printf("Elements (%d) : \n", iSize );
  for (i = 0 ; i <iSize; i++){
    scanf("%d",&Arr[i]);
  }
  iRet =  LastOcc (iSize, iValue, Arr);
  if (iRet == -1){
    printf("Not Found\n");
  }
  else{
    printf("Last occurence of (%d) is at: %d\n",iValue, iRet );
  }
  return 0;
}
