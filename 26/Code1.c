#include <stdio.h>

void strToLower(char *src){
  char *temp = src;
  while (*src != '\0'){
    if (*src >= 65 && *src <= 90)
    *src = (*src +32);
    src++;
  }
  printf("String : %s\n", temp );
}

int main (){
  char Arr[30];
  printf("String: ");
  scanf("%[^'\n']s", Arr);

  strToLower(Arr);

  return 0;
}
