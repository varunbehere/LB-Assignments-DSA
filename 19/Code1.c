#include <stdio.h>

int Difference(int iNo, int Brr[]){
  int iSumEven = 0, iSumOdd = 0 , i = 0;
  for (i = 0; i< iNo; i++){
    if (Brr[i]%2 == 0){
      iSumEven += Brr[i];
    }
    else{
      iSumOdd += Brr[i];
    }
  }
  return (iSumEven - iSumOdd);
}

int main (){
  int iNum = 0, i = 0, iRet = 0;
  printf("Enter the no. of elements: ");
  scanf("%d", &iNum);

  int Arr[iNum];
  for (i = 0; i<iNum; i++){
    scanf("%d", &Arr[i]);
  }

  iRet = Difference (iNum, Arr);
  printf("Difference: %d\n", iRet );

  return 0;
}
