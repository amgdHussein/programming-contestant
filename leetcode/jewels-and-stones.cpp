#include <bits/stdc++.h>
using namespace std;

#define N 256  // ascii len

int numJewelsInStones(string jewels, string stones) {
  vector<int> count(N);
  for (const char &jewel : jewels) {
    count[jewel]++;
  }

  int ans = 0;
  for (const char &stone : stones) {
    ans += count[stone];
  }
  return ans;
}

int main(int argc, char const *argv[]) {
  string jewels = "aA", stones = "aAAbbbb";
  int ans = numJewelsInStones(jewels, stones);

  cout << ans << '\n';

  return 0;
}
