#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
  int answer = 0;

  sort(array.begin(), array.end());
  answer = array[array.size() / 2];

  return answer;
}