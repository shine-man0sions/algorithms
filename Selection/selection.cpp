#include <iostream>

class AlgorithmsFunc {
  public:
  void getSort(int *arr, int size) {
    for (int i = 0; i < size; i++) {
      int minPosition = i;
      for (int j = i+1; j < size; j++){
        if(arr[j] < arr[minPosition]) {
          minPosition = j;
        }
      }
      int temp = arr[i];
      arr[i] = arr[minPosition];
      arr[minPosition] = temp;
      printf("%d\n", arr[i]);
    }
  }
};

int main() {
  int arr[10] = {2,5,8,20,6,10,13,21,43,15};
  AlgorithmsFunc C;
  C.getSort(arr, 10);
  return 0;
}