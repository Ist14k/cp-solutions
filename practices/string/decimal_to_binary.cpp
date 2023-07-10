#include <bits/stdc++.h>

using namespace std;

string decimal_to_binary(int n);

int main()
{
  int n; cin >> n;
  cout << "Decimal: " << n << endl;
  cout << "Binary: " << decimal_to_binary(n) << endl;
  return 0;
}

string decimal_to_binary(int n)
{
  string binary = "";

  while(n > 0)
  {
    int t = n % 2;
    binary += to_string(t);
    n /= 2;
  }

  reverse(binary.begin(), binary.end());

  return binary;
}