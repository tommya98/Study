#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int a[9], sum = 0, i, j;
  for (i = 0; i < 9; i++) {
    cin >> a[i];
    sum += a[i];
  }
  sort(a, a + 9);
  for (i = 0; i < 8; i++) {
    for (j = i + 1; j < 9; j++) {
      if(sum - a[i] - a[j] == 100)
        break;
    }
    if(sum - a[i] - a[j] == 100)
      break;
  }
  for (int k = 0; k < 9; k++) {
    if(k == i || k == j)
      continue;
    cout << a[k] << '\n';
  }

  return 0;
}