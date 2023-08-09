#include <iostream>

using namespace std;

/*
  time complexicity -> O(n).
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
  
  for(int i {2}; i < n; i++)
  {
    if(n % i == 0) return false;
  }

  return true;
}