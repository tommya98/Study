#include <string>
#include <vector>

using namespace std;

int solution(vector<int> number) {
  int answer = 0;

  int len = number.size();
  for (int i = 0; i < len; i++) {
    for (int j = i + 1; j < len; j++) {
      for (int k = j + 1; k < len; k++) {
        if (number[i] + number[j] + number[k] == 0) answer++;
      }
    }
  }

  return answer;
}