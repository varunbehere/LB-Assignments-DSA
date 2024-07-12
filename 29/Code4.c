#include <stdio.h>

void StrToLowX(char *str, char *dest){

  while(*str != '\0'){
    if (((*str) >= 65) && ((*str) <= 90)){
      *dest = (*str) + 32;
    }
    else {
      *dest = *str;
    }
    dest++;
    str++;
  }

}

int main (){
  char Arr [30] = {'\0'};
  char Brr [30] = {'\0'};

  printf("Enter a String : ");
  scanf ("%[^\n]s", Arr);

  StrToLowX(Arr, Brr);

  printf("Modified String: %s\n",Brr );

  return 0;
}
