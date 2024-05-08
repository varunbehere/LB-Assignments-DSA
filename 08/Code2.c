#include <stdio.h>

#define PI 3.14

double ReactangleArea(float fNo1, float fNo2){
  double dArea = 0.0;
  dArea = fNo1 * fNo2;

  return dArea;
}

int main (){
  float fValue1 = 0.0f, fValue2 = 0.0f;
  double dRet = 0.0;

  printf ("Height : ");
  scanf("%f", &fValue1 );
  printf ("\nWidth : ");
  scanf("%f", &fValue2 );

  dRet = ReactangleArea (fValue1,fValue2);
  printf("Area of Rectangle : %f", dRet);
  return 0;
}
