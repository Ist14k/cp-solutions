// Fox And Snake,

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
  int n, m; cin >> n >> m;  
  // n -> row, m -> column
  for(int i {1}; i <= n; i++)
  {
    for(int j {1}; j <= m; j++)
    {
      if(i % 2 == 0)
      {
        if((i / 2) % 2 != 0)
        {
          if(j == m) cout << '#';
          else cout << '.';
        }

        if((i / 2) % 2 == 0)
        {
          if(j == 1) cout << '#';
          else cout << '.';
        }
      }
      else cout << '#';
    }
    cout << endl;
  }
  return 0;
}
