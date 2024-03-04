#include <bits/stdc++.h>
using namespace std;

int T, k, n;
int arr[15][15];

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> T;

  for (int i = 1; i < 15; i++) arr[0][i] = i;
  for (int i = 1; i < 15; i++) {
    for (int j = 1; j < 15; j++) arr[i][j] = arr[i][j - 1] + arr[i - 1][j];
  }

  for (int t = 0; t < T; t++) {
    cin >> k >> n;
    cout << arr[k][n] << "\n";
  }

  return 0;
}
