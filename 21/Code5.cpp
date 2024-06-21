#include <iostream>
using namespace std;

int Product (int Brr[], int iLength){
  int i = 0, iProduct = 1;
  bool bFlag = false;
  for (i = 0; i < iLength; i++){
    if (Brr[i] % 2 != 0){
      iProduct = iProduct * Brr[i];
      bFlag = true;
    }
  }
  if (!bFlag) iProduct = 0;
  return iProduct;
}

int main (){
  cout << "No of elements: ";
  int *Arr = NULL;
  int iSize = 0, i = 0, iRet = 0;
  cin >> iSize;

  Arr = new int [iSize];

  if (Arr == NULL){
    cout << "Memory allocation failed ! "<<endl;
    return -1;
  }

  cout <<"Enter Elements ("<<iSize<<") : "<<endl;
  for ( i = 0; i < iSize; i++){
    cin >> Arr[i];
  }

  iRet = Product (Arr, iSize);
  cout << "Product is " << iRet << endl;

  delete []Arr;
  return 0;
}
