#include <bits/stdc++.h>
using namespace std;

int k;
int arr[13];
bool vis[13];
int ans[6];

void func(int cnt, int idx);

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  while (true) {
    cin >> k;
    if (k == 0) break;
    for (int i = 0; i < k; i++) cin >> arr[i];
    func(0, 0);
    cout << "\n";
  }

  return 0;
}

void func(int cnt, int idx) {
  if (cnt == 6) {
    for (int i = 0; i < 6; i++) cout << ans[i] << ' ';
    cout << '\n';
    return;
  }
  for (int i = idx; i < k; i++) {
    if (vis[i]) continue;
    vis[i] = true;
    ans[cnt] = arr[i];
    func(cnt + 1, i + 1);
    vis[i] = false;
  }
}