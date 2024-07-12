#include <stdio.h>

void StrNCpyX(char *str, char *dest, int iCnt){
  if (*str == '\0'){
    printf("No string !\n");
    return;
  }
  while ((*str != '\0')  && (iCnt != 0)){
    *dest = *str;
    dest ++;
    str ++;
    iCnt --;
  }
}

int main (){
  char arr[50] = {'\0'};
  char brr[50] = {'\0'};
  int iCount = 0;

  printf("String to Copy: ");
  scanf("%[^'\n']s", arr);
  printf("N: ");
  scanf("%d", &iCount );

  StrNCpyX(arr, brr, iCount);

  printf("Copied String : %s\n", brr );

  return 0;
}
