#include <stdio.h>

double SqftToSqm(float fNo){
  double dToSqm = 0.0;
  dToSqm = fNo * 0.0929;
  return dToSqm;
}

int main (){
  float fValue = 0.0f;
  double dRet = 0.0;

  printf ("in Square Feet : ");
  scanf ("%f",&fValue);

  dRet = SqftToSqm(fValue);
  printf ("in Square Meter : %f",dRet );
  return 0;
}
