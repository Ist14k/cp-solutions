#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  getline(cin, s);
  bool is_palindrome {true};

  int begin {0}, end = s.length() - 1, middle ((begin + end) / 2);

  while(begin != middle) {
    if(s[begin] != s[end]) {
      is_palindrome = false;
      break;
    }

    begin++, end--;
  }

  cout << boolalpha << is_palindrome << endl;
  return 0;
}