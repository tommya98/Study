#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
  int answer = 0;

  if (a % 2 == 1 && b % 2 == 1) {
    answer = a * a + b * b;
  } else if (a % 2 == 1 || b % 2 == 1) {
    return 2 * (a + b);
  } else {
    return a > b ? a - b : b - a;
  }

  return answer;
}