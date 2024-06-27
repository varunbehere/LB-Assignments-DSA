#include <stdio.h>

void strToggleX(char *src){
  char *temp = src;
  while (*src != '\0'){
    if (*src >= 65 && *src <= 90){
      *src = (*src +32);
    }
    else if (*src >= 97 && *src <= 122){
      *src = (*src -32);
    }
    src++;
  }
  printf("N String : %s\n", temp );
}

int main (){
  char Arr[30];
  printf("String  : ");
  scanf("%[^'\n']s", Arr);

  strToggleX(Arr);

  return 0;
}
