#include <stdio.h>

void StrCat(char *str,char *dest){
  while (*str != '\0'){
    str++;
  }

  *str = ' ';
  str++;

  while (*dest != '\0'){
    *str = *dest;
    str++;
    dest++;
  }
  
  *str = '\0';
}

int main (){
  char arr[50] = {'\0'};
  char brr[30] = {'\0'};

  printf("String1: ");
  scanf("%[^'\n']s", arr);
  getchar();
  printf("String2: ");
  scanf("%[^'\n']s", brr);

  StrCat (arr, brr);

  printf("%s\n",arr );
  return 0;
}
