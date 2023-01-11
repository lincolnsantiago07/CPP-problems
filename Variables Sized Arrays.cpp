#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
  int c, d;
  int a, b;
  int k;
  cin >> c >> d;

  int** arr = new int*[c];

  for (int i = 0; i < c; ++i) {
    cin >> k;
    arr[i] = new int[k];
    for (int j = 0; j < k; ++j) {
      cin >> arr[i][j];
    }
  }

  for (int i = 0; i < d; ++i) {
    cin >> a >> b;
    cout << arr[a][b] << endl;
  }

  for (int i = 0; i < c; ++i) {
    delete [] arr[i];
  }

  delete [] arr;

    return 0;
}