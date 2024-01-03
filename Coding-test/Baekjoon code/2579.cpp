#include <bits/stdc++.h>
using namespace std;

int N;
int arr[301];
int dp[301][2];

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> N;
  for (int i = 0; i < N; i++) cin >> arr[i];
  dp[0][0] = arr[0];
  dp[0][1] = arr[0];
  dp[1][0] = arr[1];
  dp[1][1] = arr[0] + arr[1];
  for (int i = 2; i < N; i++) {
    dp[i][0] = max(dp[i - 2][0], dp[i - 2][1]) + arr[i];
    dp[i][1] = dp[i - 1][0] + arr[i];
  }
  cout << max(dp[N - 1][0], dp[N - 1][1]);

  return 0;
}
