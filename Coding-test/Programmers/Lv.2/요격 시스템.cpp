#include <algorithm>
#include <string>
#include <vector>

using namespace std;

bool compare(vector<int> a, vector<int> b) { return a[1] < b[1]; }

int solution(vector<vector<int>> targets) {
  int answer = 0;

  sort(targets.begin(), targets.end(), compare);
  int end = 0;
  for (vector<int> target : targets) {
    if (target[0] >= end) {
      end = target[1];
      answer++;
    }
  }

  return answer;
}