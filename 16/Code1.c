#include <stdio.h>

void Display (int iNo1, int iNo2 ){
  int i = 0, j = 0;
  if (iNo1 == iNo2){
    for (i = 1; i <= iNo1; i++ ){
      for (j = 1; j <= iNo2; j++ ){

        if (i >= j){
          printf("*\t" );
        }
        else{
          printf("#\t");
        }

      }
      printf("\n");
    }
    printf("\n");
  }
  else {
    printf("Pattern cant be made !\n");
  }
}

int main (){
  int iValue1 = 0, iValue2 = 0;
  printf("Enter Rows: ");
  scanf("%d", &iValue1 );
  printf("Enter Cols: ");
  scanf("%d", &iValue2 );

  Display (iValue1,iValue2);

  return 0;
}
