#include <stdio.h>

void StrCpySmall(char *str,char *dest){
  while (*str != '\0'){
    if (*str >= 'a' && *str <= 'z'){
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

  StrCpySmall (arr, brr);

  printf("%s\n",brr );
  return 0;
}
