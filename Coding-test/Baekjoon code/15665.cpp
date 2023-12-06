#include <bits/stdc++.h>
using namespace std;

int N, M;
int arr[8];
int ans[8];

void func(int n);

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> N >> M;
  for (int i = 0; i < N; i++) {
    cin >> arr[i];
  }
  sort(arr, arr + N);
  func(0);

  return 0;
}

void func(int n) {
  if (n == M) {
    for (int i = 0; i < M; i++) {
      cout << ans[i] << " ";
    }
    cout << "\n";
    return;
  }
  int prev = 0;
  for (int i = 0; i < N; i++) {
    if (arr[i] == prev) continue;
    ans[n] = arr[i];
    prev = ans[n];
    func(n + 1);
  }
}