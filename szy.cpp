#include "szylib.h"

#include <bits/stdc++.h>

using namespace std;

void Zaszyfruj(int X, int Y, int N, string A) {
  int akt = 0;
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if (i != X && j != Y) {
        Oznacz(i, j, int(A[akt % N]) - int('A'));
        akt++;
      }
    }
  }
}

string Odszyfruj(int N, vector<vector<int>> A) {
  string wy;
  for (int i = 1; i < 8; i++) {
    for (int j = 1; j < 8; j++) {
      if ((int)wy.size() < N)
        wy += 'A' + char(A[i][j]);
    }
  }
  return wy;
}
