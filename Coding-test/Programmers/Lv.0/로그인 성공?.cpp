#include <string>
#include <vector>

using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) {
  string answer = "fail";

  for (vector<string> item : db) {
    if (item[0] == id_pw[0]) {
      if (item[1] == id_pw[1])
        answer = "login";
      else
        answer = "wrong pw";
      break;
    }
  }

  return answer;
}