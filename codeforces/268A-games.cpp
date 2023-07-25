// Games,

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
  int n; cin >> n;
  int count {0};
  vector<int> h(n), a(n);

  for(int i {0}; i < n; i++)
  {
    cin >> h[i] >> a[i];
    for(int j {0}; j < i; j++)
    {
      if(h[i] == a[j]) count++;
      if(h[j] == a[i]) count++;
    }
  }

  cout << count << endl;
  return 0;
}
