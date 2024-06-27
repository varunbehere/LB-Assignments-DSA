#include <stdio.h>

void DisplayDigits(char *src){
  printf("Digits: ");
  while (*src != '\0'){
    if (*src >= 48 && *src <= 57){
      printf("%c", *src );
    }
    src++;
  }
  printf("\n");

}

int main (){
  char Arr[30];
  printf("String  : ");
  scanf("%[^'\n']s", Arr);

  DisplayDigits(Arr);

  return 0;
}
