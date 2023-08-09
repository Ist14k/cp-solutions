// Word on the Paper,

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int16_t t; cin >> t; 
  while(t--)
  {
    vector<char> c;
    int16_t i {8};
    while(i--)
    {
      string s; cin >> s;
      for(int i {0}; i < 8; i++)
      {
        if(s[i] != '.') c.push_back(s[i]);
      }
    }
    for(const char x: c) cout << x;
    cout << endl;
  }
  return 0;
}