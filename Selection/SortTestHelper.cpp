#include "SortTestHelper.h"
#include <iostream>
#include <ctime>
#include <cassert>

namespace SortTestHelper {
/**
 * @brief generate a random array that has n elements
 * @param n: the number of array
 * @param rangeL: the minimum element of array
 * @param rangeR: the maximum element of array
*/

int* SortHelper::generateRamdonArray(int n, int rangeL, int rangeR) {

  // using assert to determine weather rangeR is greater than rangeL
  assert(rangeL <= rangeR);

  // initional a new arr
  int *arr = new int[n];

  // set random srand using time 
  srand(time(NULL));

  // using for loop to store a random number in array
  for (int i = 0; i < n; i++) {
    arr[i] = rand() % (rangeR - rangeL + 1) + rangeL;
  }

  // return arr
  return arr;
}

void SortHelper::coutPrint(int *arr, int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
}
}