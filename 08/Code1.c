#include <stdio.h>

#define PI 3.14

double CircleArea(float fNo){
  double dArea = 0.0;
  dArea = PI * fNo * fNo;

  return dArea;
}

int main (){
  float fValue = 0.0f;
  double dRet = 0.0;

  printf ("Radius : ");
  scanf("%f", &fValue );

  dRet = CircleArea (fValue);
  printf("Area of Circle : %f", dRet);
  return 0;
}
