#include <iostream>

void insertionSort(int a[],int N);

int main(){
  int a[6]={6,5,3,2,4,1};
  insertionSort(a,6);
  for (int i=0; i < 6;++i)
    std::cout << a[i] << ","; 
  std::cout << std::endl;
	  
}

void insertionSort(int a[], int N){
  for (int i = 1 ; i < N; ++i){
    int X = a[i];

    int j = i - 1;
    for (; j >= 0 && a[j] > X; --j)
      a[j+1] = a[j];
    a[j+1] = X;
  }
}


