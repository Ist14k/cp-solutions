// Pangram,

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
  int n; cin >> n;
  string str; cin >> str;
  transform(str.begin(), str.end(), str.begin(), ::tolower);

  set<char> c;
  
  for (size_t i = 0; i < n; i++)
  {
    c.insert(str[i]);
  }

  if(c.size() >= 26) cout << "YES" << endl;
  else cout << "NO" << endl;
  
  return 0;
}
