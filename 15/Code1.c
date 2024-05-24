#include <stdio.h>

void Display (int iNo1, int iNo2){
  int i = 0, j = 0, iCnt = 1;
  for ( i = 1; i <= iNo1; i++) {
    for ( j = 1; j <= iNo2; j++, iCnt++) {
      if( iCnt > 9 ){
        iCnt = 1;
        printf("%d\t", iCnt);
      }
      else {
        printf("%d\t",iCnt);
      }
    }
    printf("\n");
  }
}

int main (){
  int iValue1 = 0, iValue2 = 0;
  printf ("Rows and Columns : ");
  scanf("%d %d", &iValue1, &iValue2);
  Display (iValue1, iValue2);
  return 0;
}
