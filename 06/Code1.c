#include <stdio.h>

int CheckNum(int iNo){
  if (iNo < 50){
    return 1;
  }
  else if (iNo >50 && iNo < 100){
    return 2;
  }
  else {
    return 3;
  }
}
int main (){
  int iValue = 0 ;
  int iRet = 0;

  printf("Enter a Number :");
  scanf("%d",&iValue);

  iRet = CheckNum (iValue);
  if (iRet == 1){
    printf("No is Small\n");
  }
  else if (iRet == 2){
    printf("No is Medium\n");
  }
  else{
    printf("No is Larger\n");
  }
}
