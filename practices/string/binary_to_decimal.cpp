#include <bits/stdc++.h>

using namespace std;

int binary_to_deciimal(string binary);

int main()
{
  string binary; cin >> binary;

  cout << "Binary: " << binary << endl;
  cout << "Decimal: " << binary_to_deciimal(binary) << endl;

  return 0;
}

int binary_to_deciimal(string binary)
{
  int base {1};
  int dec {0};

  for(int i = binary.length() - 1; i >= 0; i--)
  {
    dec += (int)(binary[i] - '0') * base;
    base *= 2;
  }

  return dec;
}