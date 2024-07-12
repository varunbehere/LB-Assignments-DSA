#include <stdio.h>

void StrToCapX(char *str, char *dest){

  while(*str != '\0'){
    if (((*str) >= 97) && ((*str) <= 122)){
      *dest = (*str) - 32;
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

  StrToCapX(Arr, Brr);

  printf("Modified String: %s\n",Brr );

  return 0;
}
