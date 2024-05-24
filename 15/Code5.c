#include <stdio.h>

void Display (int iNo1, int iNo2){
  int i = 0, j =0;
  for (i = 1 ; i<= iNo1 ; i++){
    for (j = i ; j< iNo1+i ; j++,iNo2++){
      printf("%d\t", j);
    }
    printf ("\n");
  }
}

int main (){
  int iValue1 = 0, iValue2 = 0;
  printf("Rows and Columns: ");
  scanf ("%d %d", &iValue1, &iValue2);
  Display(iValue1,iValue2);
  return 0;
}
