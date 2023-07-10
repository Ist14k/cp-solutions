#include <iostream>

using namespace std;

string check_palindrome(string str)
{
  int start {0};
  int end = str.length() - 1;

  while(start < end) {
    if(str[start] != str[end]) {
      return "NO";
    } else {
      start++;
      end--;
    }
  }

  return "YES";
}

int main()
{
  string str, reverse_str {""};
  cin >> str;
  
  cout << check_palindrome(str) << endl;

  return 0;
}