#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
  string answer = "";

  int len = my_string.length();
  answer = my_string.substr(len - n);

  return answer;
}