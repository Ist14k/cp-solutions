// Minutes Before the New Year

#include <iostream>

using namespace std;

int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    int h, m, total_m;
    cin >> h >> m;
    total_m = (h * 60) + m;

    cout << 1440 - total_m << endl;
  }

  return 0;
}




