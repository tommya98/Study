#include <bits/stdc++.h>
using namespace std;

int T;
string s;

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> T;
  for (int i = 0; i < T; i++) {
    cin >> s;
    cout << s[0] << s[s.size() - 1] << "\n";
  }

  return 0;
}
