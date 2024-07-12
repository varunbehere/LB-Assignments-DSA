#include <stdio.h>

void StrCpyCap(char *str,char *dest){
  while (*str != '\0'){
    if (*str >= 'A' && *str <= 'Z'){
      *dest = *str;
      dest++;
    }
    str++;
  }
}

int main (){
  char arr[50] = {'\0'};
  char brr[50] = {'\0'};

  printf("String: ");
  scanf("%[^'\n']s", arr);

  StrCpyCap (arr, brr);

  printf("%s\n",brr );
  return 0;
}
