#include "Selection.h"
#include <iostream>

namespace Selection{
  void AlgorithmsFunc::getSort(int *arr, int size) {

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
    }
  }
}