#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int m, int c) {
  string answer = "";

  int len = my_string.length();
  for (int i = c - 1; i < len; i += m) {
    answer += my_string[i];
  }

  return answer;
}