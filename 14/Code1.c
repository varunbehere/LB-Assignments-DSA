#include <stdio.h>

void Display(int iRows, int iCols){
  int i = 0 , j = 0;
  char ch ='A';
  for (i = 1; i <= iRows; i++){
    for (j = 1; j<= iCols; j++, ch++){
      printf("%c\t", ch);
    }
    ch = 'A';
    printf("\n");
  }
}

int main (){
  int iValue1 = 0, iValue2 = 0;
  printf("Values : ");
  scanf ("%d %d", &iValue1, &iValue2);
  Display (iValue1, iValue2);
  return 0;
}
