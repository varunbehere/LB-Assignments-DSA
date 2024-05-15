#include <stdio.h>

void Display(int iRows, int iCols){
  int i = 0 , j = 0;
  char ch ='\0';
  for (i = 1; i <= iRows; i++){
    if (i%2 == 0){
      ch = 'a';
    }
    else {
      ch = 'A';
    }
    for (j = 1; j<= iCols; j++, ch++){
      printf("%c\t", ch);
    }
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
