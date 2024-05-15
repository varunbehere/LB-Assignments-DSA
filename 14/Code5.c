#include <stdio.h>
void Display(int iRows, int iCols){
  int i = 0, j = 0;
  int iCounter = 1;
  for (i = 1; i <= iRows; i ++){
    for (j = 1; j <= iCols; j ++, iCounter++){
      printf("%d\t",iCounter);
    }
    printf("\n");
  }

}

int main (){
  int iValue1 = 0, iValue2 = 0;
  printf ("Values : ");
  scanf ("%d %d", &iValue1, &iValue2);

  Display(iValue1, iValue2);
  return 0;
}
