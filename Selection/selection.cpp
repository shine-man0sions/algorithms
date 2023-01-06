#include <iostream>

// create the class
class AlgorithmsFunc {
  public: 

  /// @brief this is a public function of class AlgorithmsFunc used to sort array
  /// @param arr array
  /// @param size  length of array

  void getSort(int *arr, int size) {

    // using for loop to get each element
    for (int i = 0; i < size - 1; i++) {

      // initional the index of minimum element
      int minPosition = i;

      // using for loop to compare elements get the minimum index
      for (int j = i+1; j < size; j++){
        minPosition = arr[j] < arr[minPosition] ? j : minPosition;
      }

      // exchange the elements
      int temp = arr[i];
      arr[i] = arr[minPosition];
      arr[minPosition] = temp;

      // print the array
      printf("The step of %d, The result is",i);
      for (int k = 0; k < size; k++) {
        printf(" %d", arr[k]);
      }
      printf("\n");
    }
  }
};

int main() {
  int arr[10] = {2,5,8,20,6,10,13,21,43,15};
  AlgorithmsFunc C;
  C.getSort(arr, 10);
  return 0;
}