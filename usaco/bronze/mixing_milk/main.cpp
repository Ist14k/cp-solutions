#include <bits/stdc++.h>

using namespace std;

const int N {3};
const int MAX_TURN {100};

int main()
{
  freopen("mixmilk.in", "r", stdin);
  freopen("mixmilk.out", "w", stdout);

  vector<int> capacity(N);
  vector<int> milk(N);

  for(int i {0}; i < N; i++)
  {
    cin >> capacity[i] >> milk[i];
  }

  for(int i {0}; i < MAX_TURN; i++)
  {
    // selecting the buckets,
    // 0 -> 1, 1 -> 2, 2 -> 0, 0 -> 1, 1 -> 2, 2 -> 0, ...

    int bucket_1 = i % N; 
		int bucket_2 = (i + 1) % N;

		/*
		 * The amount of milk to pour is the minimum of the remaining milk
		 * in bucket 1 and the available capacity of bucket 2
     * 
     * 10 3 -> 0
     * 11 4 -> 1
     * 12 5 -> 2
		*/
    // min(3, (11 - 4) -> 7) -> 3
		int amt = min(milk[bucket_1], capacity[bucket_2] - milk[bucket_2]);

		milk[bucket_1] -= amt; // -3
		milk[bucket_2] += amt; // +3
  }

  for(const int &m: milk)
  {
    cout << m << endl;
  }

  return 0;
}
