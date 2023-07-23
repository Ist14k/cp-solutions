#include <bits/stdc++.h>

using namespace std;

int solve(int n)
{
   int s = 0;
   for (int p = 1; p <= n; s++)
   {
      p = p / (p % 10) * (p % 10 + 1);
      if (p % 10 == 0)
         p++;
   }
   return s;
}

int main()
{
   int n = 100;
   cout << solve(n) << endl;
}
