#ifndef _SORTTESTHELPER_H
#define _SORTTESTHELPER_H
#pragma once

namespace SortTestHelper {
  class SortHelper {
    public:
      int *generateRamdonArray(int n, int rangeL, int rangeR);
      void coutPrint(int *arr, int n);
  };
}

#endif