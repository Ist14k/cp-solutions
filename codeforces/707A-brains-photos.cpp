// Brain's Photos,

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
  int n, m;
  cin >> n >> m;

  bool is_coloured {false};

  for(int i = 0; i < m*n; i++)
  {
    char c; cin >> c;
    if(c == 'C' or c == 'M' or c == 'Y') is_coloured = true;
    
  }

  if(is_coloured) cout << "#Color" << endl;
  else cout << "#Black&White" << endl;
  
  return 0;
}
