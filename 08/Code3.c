#include <stdio.h>

#define METER 1000

double KMtoMeter(float fNo){
  double dMeter;
  dMeter = fNo * METER;
  return dMeter;
}

int main (){
  float fValue = 0.0f;
  double dRet = 0.0;

  printf ("in KM : ");
  scanf("%f", &fValue);

  dRet = KMtoMeter (fValue);
  printf("in Meters : %f", dRet);
  return 0;
}
