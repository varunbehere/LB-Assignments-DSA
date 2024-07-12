#include <stdio.h>

void StrCpyX(char *str, char *dest){

  while (*str != '\0' ){
    if (*str != ' ') {
      *dest = *str;
      *dest++;
    }
    str++;
  }
}

int main (){

  char Arr [30] = {'\0'};
  char Brr [30] = {'\0'};

  printf("Enter a String : ");
  scanf ("%[^\n]s",Arr);

  StrCpyX(Arr, Brr);

  printf("new string : %s\n", Brr);

  return 0;
}
