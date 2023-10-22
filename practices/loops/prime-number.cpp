#include <bits/stdc++.h>

using namespace std;

/*
  time complexity -> O(n).
*/

bool check_prime(int n);

int main()
{
  int n; cin >> n;
  cout << boolalpha << check_prime(n) << endl;
  return 0;
}

bool check_prime(int n)
{
  if(n <= 1) return false;
  
  for(int i {2}; i < sqrt(n); i++)
  {
    if(n % i == 0) return false;
  }

  return true;
}