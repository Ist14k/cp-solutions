// Team,
#include <iostream>

using namespace std;

int main()
{
  int t, total {0}; cin >> t;
  while(t--)
  {
    int i {3}, n {0};
    while(i--)
    {
      int m; cin >> m;
      if(m == 1) n++;
    }

    if(n > 1) total++;
  }

  cout << total << endl;

  return 0;
}