#include <stdio.h>
#include <stdbool.h>

bool CheckVowels(char *src){
  // bool bCheck = false;

  while (*src != 0){
    if (*src == 'a' || *src == 'e' || *src == 'i' || *src == 'o' || *src == 'u'){
      // bCheck = true;
      return true;
    }
    src++;
  }
  return false;
}

int main (){
  char Arr[30];
  bool bRet = 0 ;
  printf("String : ");
  scanf ("%[^'\n']s", Arr);

  bRet = CheckVowels(Arr);
  if (bRet == true){
    printf("Has Vowels\n");
  }
  else{
    printf("Does not have Vowels\n");
  }
  return 0;
}
