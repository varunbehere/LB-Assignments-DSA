#include <stdio.h>

void StrCpyX(char *str, char *dest){
  if (*str == '\0'){
    printf("No string !\n");
    return;
  }
  while (*str != '\0' ){
    *dest = *str;
    dest ++;
    str ++;
  }
}

int main (){
  char arr[50] = {'\0'};
  char brr[50] = {'\0'};

  printf("String to Copy: ");
  scanf("%[^'\n']s", arr);

  StrCpyX(arr, brr);

  printf("Copied String : %s\n", brr );

  return 0;
}
