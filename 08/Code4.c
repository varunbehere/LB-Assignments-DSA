#include <stdio.h>

double FhtoCs(float fNo){
  double dToCs = 0.0;
  dToCs = (fNo - 32) * (5.0/9.0);
  return dToCs;
}

int main (){
  float fValue = 0.0f;
  double dRet = 0.0;

  printf ("in Fahrenheit : ");
  scanf ("%f",&fValue);

  dRet = FhtoCs(fValue);
  printf ("in Celsius : %f",dRet );
  return 0;
}
