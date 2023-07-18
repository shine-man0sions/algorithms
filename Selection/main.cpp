#include <iostream>
#include "SortTestHelper.h"
#include "Selection.h"

int main() {
  int n = 100;
  int s = 300

  // using namespace SortTestHelper
  SortTestHelper::SortHelper mgr;

  // gengerate a random array
  int * arr = mgr.generateRamdonArray(n, 0, n);

  // using namespace Selection
  Selection::AlgorithmsFunc C;
  // using namespace Selection
    Selection::AlgorithmsFunc C;

  // array sort
  C.getSort(arr, n);

  mgr.coutPrint(arr, n);
  delete[] arr;
  return 0;
}
