#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, v, a[100] = {0, }, r = 0;
  cin >> n;
  for(int i = 0; i < n; i++)
    cin >> a[i];
  cin >> v;
  for(int i = 0; i < n; i++) {
    if(a[i] == v)
      r++;
  }
  cout << r;

  return 0;
}