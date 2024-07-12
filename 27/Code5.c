#include <stdio.h>

void ReverseString(char arr[]){
  int iCount = 0;
  while (arr[iCount] != '\0'){
    iCount ++;
  }

  for (int i =0; i<= (iCount/2); i++){
    char temp = arr[i];
    arr[i] = arr [iCount-i-1];
    arr [iCount-i-1] = temp;
  }
}

int main (){
  char Str[50] = {'\0'};

  printf("Enter string: ");
  scanf("%[^'\n']s", Str);

  ReverseString(Str);

  printf("Modified String: %s \n", Str);
}
