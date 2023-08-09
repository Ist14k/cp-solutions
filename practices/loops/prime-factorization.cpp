#include <bits/stdc++.h>

using namespace std;

void print_primes(int n);
void print_factors(int n);

int main()
{
  int n; cin >> n;
  print_primes(n);
  cout << endl;
  print_factors(n);
  return 0;
}

void print_primes(int n)
{
  // if n is divisible by 2. Continue till it's not be divisible by 2.
  while(n % 2 == 0)
  {
    cout << 2 << " ";
    n /= 2;
  }

  // After divided by 2 or n is not divisible by 2.
  
  for(int i {3}; i < sqrt(n); i += 2)
  {
    while (n % i == 0)
    {
      cout << i << " ";
      n /= i;
    }  
  }

  // Last digit after 2 operation.
  if(n > 1) cout << n;
}

void print_factors(int n)
{
  int count {0};

  while(n % 2 == 0)
  {
    count++;
    n /= 2;
  }
  if(count) cout << 2 << "^" << count << endl;
  
  for(int i {3}; i < sqrt(n); i += 2)
  {
    count = 0;
    while (n % i == 0)
    {
      count++;
      n /= i;
    }
    if(count) cout << i << "^" << count << endl; 
  }

  if(n > 2) cout << n << "^" << 1 << endl;
}