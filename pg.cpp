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
   vector<int> v {1, 2, 3, 4, 5, 6};

   auto it = find(v.begin(), v.end(), 9);

   if(it != v.end())
   {
      v.erase(it, v.end());
   }

   for(auto it = v.begin(); it != v.end(); it++)
   {
      cout << *it << " ";
   }
   
}
