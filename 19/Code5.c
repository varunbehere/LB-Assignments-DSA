#include  <stdio.h>
#include  <stdlib.h>
void Display (int iLength, int Arr[]){
  int i = 0;
  printf("Nos divisible by 5 : " );
  for (i = 0; i< iLength; i++){
    if (Arr[i] % 11 == 0) {
      printf("%d\t", Arr[i]);
    }
  }
  printf("\n");
}
int main (){
  int iSize = 0;
  int *p = NULL;
  int i = 0;

  printf("Enter the Size of an array : ");
  scanf("%d", &iSize);

  p = (int *) malloc (iSize * sizeof(int));
  if (p == NULL){
    printf("Unable to locate memory");
    return -1;
  }

  printf("Enter elements (%d) : ", iSize );
  for (i = 0; i< iSize; i++){
    scanf("%d", &p[i]);
  }

  Display (iSize, p);

  free (p);
  return 0;
}
