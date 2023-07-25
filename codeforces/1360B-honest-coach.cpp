// Honest Coach,

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
  int t; cin >> t;
  while(t--)
  {
    int n; cin >> n;
    vector<int> a(n);
    for (size_t i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    int min = INT16_MAX;

    for (size_t i = 0; i < n - 1; i++)
    {
      if(a[i + 1] - a[i] <= min) min = a[i + 1] - a[i];
    }

    cout << min << endl;  
  }
  
  return 0;
}
