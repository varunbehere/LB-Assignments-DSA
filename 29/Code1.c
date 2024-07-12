#include <stdio.h>

void StrCpyRev(char *str,char *rev){
  int iCount = 0;
  while (*str != '\0' ){
    str++;
    iCount++;
  }

  str--;

  for (int i = (iCount-1); i >= 0; i--, rev++, str--){
    *rev = *str;
  }
  rev [iCount] = '\0';
}

int main (){
  char arr [30] = {'\0'};
  char brr [30] = {'\0'};

  printf("Enter a String: \n");
  scanf ("%[^\n]s", arr);

  StrCpyRev(arr,brr);

  printf("Reversed String: %s\n", brr );

  return 0;
}
