#include <stdio.h>
#include <stdbool.h>

void Reverse(char *src) {
    int iCnt = 0;
    char *start = src;

    while (*src != '\0') {
        iCnt++;
        src++;
    }
    printf("R String : ");
    for (int i = (iCnt - 1); i >= 0; i--) {
        printf("%c", start[i]);
    }
    printf("\n");
}

int main (){
  char Arr[30];
  bool bRet = 0 ;
  printf("String   : ");
  scanf ("%[^'\n']s", Arr);

  Reverse(Arr);

  return 0;
}
