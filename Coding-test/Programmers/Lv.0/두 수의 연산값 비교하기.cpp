#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
  int answer = 0;

  answer = stoi(to_string(a) + to_string(b));
  if (2 * a * b > answer) {
    answer = 2 * a * b;
  }

  return answer;
}