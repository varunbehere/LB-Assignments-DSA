#include <stdio.h>
#include <ctype.h>
void DislayConvert(char cValue){
  if (islower(cValue)){
    printf ("%c",toupper(cValue));
  }
  else if (isupper(cValue)  ){
    printf ("%c",tolower(cValue));
  }
}
int main (){
  char cValue = '\0';
  printf ("Enter a character : ");
  scanf("%c", &cValue);
  DislayConvert (cValue);
  return 0;
}
