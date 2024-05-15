#include <stdio.h>

void Display(int iRows, int iCols){
  int i =0, j= 0;
  for (i = 1 ; i<= iRows ;  i++){
    for ( j = 1; j <= iCols; j++){
      printf("%d\t",i);
    }
    printf("\n");
  }
}

int main (){
  int iValue1 = 0, iValue2 = 0;

  printf("Rows: ");
  scanf ("%d", &iValue1);

  printf("Cols: ");
  scanf ("%d", &iValue2);

  Display(iValue1, iValue2);

  return 0;
}
