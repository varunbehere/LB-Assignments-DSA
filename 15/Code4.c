#include <stdio.h>
void Display (int iNo1, int iNo2){
  int i = 0, j =0;
  for (i = 1 ; i<= iNo1 ; i++){
    for (j = 1 ; j<= iNo2 ; j++){
      if (i %2 == 0){
        printf("%d\t", -j);
      }
      else {
        printf(" %d\t", j);
      }
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
