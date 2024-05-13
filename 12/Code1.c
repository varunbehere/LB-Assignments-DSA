#include<stdio.h>

void Display(int iNo){
  char ch = 'A';
  int iCnt = 0;
  for (iCnt = 1; iCnt <= iNo ; iCnt ++){
    printf("%c\t",ch);
    ch++;
  }
  printf ("\n");
}

int main (){
  int iValue = 0;
  printf ("Enter no of Elements: ");
  scanf ("%d", &iValue);
  Display (iValue);
  return 0;
}
