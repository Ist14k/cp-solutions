#include <iostream>

using namespace std;

int main()
{
  string str, new_str {""};
  cin >> str;

  for(int i = str.length() - 1; i >= 0; i--) {
    new_str+=str[i];
  }

  cout << new_str << endl;

  return 0;
}