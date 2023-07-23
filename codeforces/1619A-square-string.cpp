// Square String?

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
  int t; cin >> t;

  while(t--)
  {
    string s; cin >> s;

    if(s.size() % 2 != 0)
    {
      cout << "NO" << endl;
    }
    else
    {
      bool is_square {true};
      int n = s.size() / 2;
      for(int i = 0; i < n; i++)
      {
        if(s[i] != s[i + n])
        {
          is_square = false;
          break;
        }
      }

      if(is_square) cout << "YES" << endl;
      else cout << "NO" << endl;
    }
  }

  return 0;
}



