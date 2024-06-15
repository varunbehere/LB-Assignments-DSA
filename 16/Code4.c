#include <stdio.h>

void Display (int iNo1, int iNo2){
    int i= 0, j= 0;
    for (i = 1; i <= iNo1; i++){
      for (j = 1; j <= iNo2; j++){
        if (i == 1 || j == 1 || i == iNo1 || j == iNo2) printf("*\t");
        else printf("@\t");
      }
      printf("\n");
    }
}

int main (){
  int iValue1 = 0, iValue2=  0;
  printf("Rows: ");
  scanf("%d", &iValue1);
  printf("Cols: ");
  scanf("%d", &iValue2);

  Display(iValue1, iValue2);

  return 0;
}


//
// 1   1 1 1 1
// 2   1 2 3 4
// 3   1 2 3 4
// 4   1 2 3 4
